

#ifndef TRAVELLING_THIEF_PROBLEM_TTPExhaustiveSolver_H
#define TRAVELLING_THIEF_PROBLEM_TTPExhaustiveSolver_H

#include "solver.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>


using namespace std;

namespace TTP {

    class TTPExhaustiveSolver : public TTPSolver {

    public:


        pair<Tour,Knapsack> solve(TravellingThiefProblem &ttp) {

            ThiefMap tm = ttp.getThiefMap();

            // create the start solution
            vector<int> v;
            for (int i = 0; i < tm.count(); ++i) {
                v.push_back(i);
            }

            double minCosts =  numeric_limits<double>::max();
            Tour* bestTour;

            /*


            // for all the possible tsp tours
            do {

                // create a tour
                Tour t(v);


                // create the start solution
                std::vector<bool> b( tm.countItems() , false );

                // for all possible array -> no order
                for (int i = 0; i < tm.countItems(); ++i) {

                    // for each permutation
                    do {

                        // save if it's a new best tour
                        Knapsack k = tm.getKnapsack(b);
                        auto p = ttp.evaluate(t, k);

                        double costs = p.first;
                        if (costs < minCosts) {
                            bestTour = & t;
                        }


                        //cout << t << " , ";
                        //for (size_t nIndex = 0; nIndex < b.size (); ++ nIndex)
                        //    cout << b [nIndex] << ' ';
                        //cout << " -> " << p.first << " , " << p.second <<'\n';


                    } while ( next_permutation(b.begin(),b.end()));

                    b[i] = true;

                }



            } while ( next_permutation(v.begin(),v.end()) && v[0] == 0);

            */
            return make_pair(*bestTour,Knapsack());


        }

    };
}



#endif //TRAVELLING_THIEF_PROBLEM_TTPExhaustiveSolver_H