// Changing types
#include <iostream>

int main() {
  float rawDamage = 33.7f;
  int rounded = static_cast<int>(rawDamage);

  std::cout << "Original: " << rawDamage << " | Rounded: " << rounded << std::endl;
}

// In game dev this would be used a lot when switching between float(movement) and int(pixel grids)