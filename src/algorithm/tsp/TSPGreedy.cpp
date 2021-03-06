#include "TSPGreedy.h"
#include <unordered_set>
#include <limits>


Tour TSPGreedy::solve(TSP tsp) {

    auto map = tsp.getMap();

    // save the current tour
    vector<int> v;
    v.push_back(0);

    // all possible next cities
    unordered_set<int> next;
    for (int i = 1; i < tsp.count(); ++i) {
        next.insert(i);
    }

    while(v.size() < tsp.count()) {

        int current = v[v.size() -1];

        double minCosts =  numeric_limits<double>::max();
        int bestNext = -1;
        auto best = next.begin();
        for (auto it = next.begin(); it != next.end(); ++it) {
            double costs = map->get(current, *it);
            if (costs < minCosts) {
                best = it;
                minCosts = costs;
            }
        }


        next.erase(best);
        v.push_back(*best);


    }

    return Tour(v);


}







