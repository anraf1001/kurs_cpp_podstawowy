#pragma once

#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count);

void print(const std::vector<std::shared_ptr<int>>& vecToPrint);