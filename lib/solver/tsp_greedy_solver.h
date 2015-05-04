

#ifndef TRAVELLING_THIEF_PROBLEM_TSPGREEDYSOLVER_H
#define TRAVELLING_THIEF_PROBLEM_TSPGREEDYSOLVER_H

#include "solver.h"
#include <unordered_set>

using namespace std;

namespace TTP {

    class TSPGreedySolver : public TSPSolver {

    public:



        Tour solve(Map map) {

            // save the current tour
            vector<int> v;
            v.push_back(0);

            // all possible next cities
            unordered_set<int> next;
            for (int i = 1; i < map.size(); ++i) {
                next.insert(i);
            }

            while(v.size() < map.size()) {

                int current = v[v.size() -1];

                double minCosts =  numeric_limits<double>::max();
                int bestNext = -1;
                auto best = next.begin();
                for (auto it = next.begin(); it != next.end(); ++it) {
                    double costs = map.get(current, *it);
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

    };
}



#endif //TRAVELLING_THIEF_PROBLEM_TSPGREEDYSOLVER_H
