#include <optional>
#include <unordered_set>
#include <vector>

// Finds a pair (x, y) from the input list such that x + y = target.
std::optional<std::pair<int, int>> TwoSum(const std::vector<int>& input, int target) {
  std::unordered_set<int> input_set;

  for (const int x : input) {
    if (const int y = target - x; input_set.find(y) != input_set.end()) {
      return std::make_pair(x, y);
    }

    input_set.insert(x);
  }

  return std::nullopt;
}
