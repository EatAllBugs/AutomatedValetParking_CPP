/*
 * Copyright (C) 2023 by EatAllBugs Limited. All rights reserved.
 * EatAllBugs<lysxx717@gmail.com>
 */
#include <tuple>
#include <vector>

#include "config/read_config.hpp"
#include "map/costmap.hpp"
class CollisionChecker {
 public:
  CollisionChecker() = default;
  CollisionChecker(const Map& map, const Vehicle& vehicle,
                   const Config& config);
  ~CollisionChecker();
  std::tuple<std::vector<double>, std::vector<double>> GetNearObstacles(
      const Node& node_x, const Node& node_y, const double& theta);

 private:
  Map map_;
  Config config_;
  Vehicle vehicle_;
};
