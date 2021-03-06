
#include "Generator.h"
#include "model/Map.h"
#include <iostream>
#include <iomanip>
#include <memory>
#include <cstdlib>
#include <fstream>
#include <algorithm>



namespace ttp {






    TSP ProblemFactory::createTSP(unsigned int n, unsigned int bounds, unsigned int seed) {

        MapPtr m = make_shared<Map>(n);

        srand(seed);

        // generator a random map with points
        vector<int> X(n);
        vector<int> Y(n);
        for (int i = 0; i < n; ++i) {
            X[i] = (rand()%bounds)+1;
            Y[i] = (rand()%bounds)+1;
        }

        // create the distance matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j && j < i) {
                    int euclDistance = sqrt((X[i] - X[j]) * (X[i] - X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j]));
                    m->set(i,j,euclDistance);
                }
            }
        }
        TSP tsp(m);
        return tsp;

    }



    KnapsackProblem ProblemFactory::createKNP(unsigned int numberOfItems, unsigned int bounds, KnapsackType type,
                                              unsigned int seed) {

        // the result of all the items
        vector<ItemPtr> items;

        srand(seed);

        // the sum of all items could we very large!
        unsigned long long sum = 0;

        auto funcRandomRange = [] (int min, int max) { return min + rand() % (max - min); };

        while (items.size() < numberOfItems) {

            // calculate the weight in between the bounds
            double weight = (rand() % bounds) + 1;
            double value;
            int abs;


            switch (type) {
                // just calculate another value in the bounds
                case KnapsackType::UNCORRELATED: value = (rand() % bounds) + 1;
                    break;
                // make sure that the difference of weight and value are only 10% of the whole range.
                case KnapsackType::WEAKLY_CORRELATED:
                    abs = bounds * 0.1;
                    if (abs == 0) abs = 1;
                    value = weight + funcRandomRange(0, 2 * abs) - abs;
                    break;
                // same as weakly but only 1% is no allowed
                case KnapsackType::STRONGLY_CORRELATED:
                    abs = bounds * 0.01;
                    if (abs == 0) abs = 1;
                    value = weight + funcRandomRange(0, 2 * abs) - abs;
                    break;
            }

            // stay in the range of the bounds!
            if (value < 0 || value > bounds) continue;

            sum += weight;
            ItemPtr iPtr = make_shared<Item>(value, weight);
            items.push_back(iPtr);

        }

        // now calculate the capacity factor. For that the random seed is used to create
        // a maximal weight between 0.2 and 0.8 of the whole sum.
        double perc = (0.8 - 0.2) * ( (double)rand() / (double)RAND_MAX ) + 0.2;
        long c = sum * perc;


        KnapsackProblem knp(items, c);
        return knp;
    }





    MOTTP ProblemFactory::createTTP(TSP tsp, KnapsackProblem knp, int itemsPerCity) {
        ThiefMapPtr ptr = make_shared<ThiefMap>(tsp.getMap());

        vector<pair<int,ItemPtr>> input;
        int counter = 0;
        for (ItemPtr item : knp.getItems()) {
            int city = (counter / itemsPerCity) + 1;
            input.push_back(make_pair(city,item));
            ++counter;
        }
        ptr->insert(input.begin(), input.end());

        MOTTP ttp(ptr, knp.getMaxWeight());
        return ttp;
    }







}




