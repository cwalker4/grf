#ifndef GRADIENTFOREST_RELABELINGSTRATEGY_H
#define GRADIENTFOREST_RELABELINGSTRATEGY_H


#include "Data.h"
#include <unordered_map>
#include <vector>

class RelabelingStrategy {
public:
  virtual std::unordered_map<size_t, double> relabel_outcomes(
      Observations *observations,
      std::vector<size_t> &nodeSampleIDs) = 0;
};


#endif //GRADIENTFOREST_RELABELINGSTRATEGY_H
