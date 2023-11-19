#include <iostream>
#include <string_view>

// -------------------------------------------------------------------------------//
const double Pi{3.14};

class Cylinder {
 public:
  // Constctors:
  Cylinder() = default;
  Cylinder(double radius, double height) {
    base_radius = radius;
    height = height;
  }
  // Functions( methods):
  double volume() { return Pi * base_radius * base_radius * height; }

  // Setter and getter methods
  double get_base_radius() { return base_radius; }
  double get_height() { return height; }

  void set_base_radius(double rad_param) { base_radius = rad_param; }
  void set_height(double height_param) { height = height_param; }

 private:
  // Member variables:
  double base_radius{1};
  double height{1};
};
// -------------------------------------------------------------------------------//

int main() {
  Cylinder cylinder1;
  std::cout << " this is the volume : " << cylinder1.volume() << std::endl;
  std::cout << " this is the base radius : " << cylinder1.get_base_radius()
            << std::endl;

  Cylinder cylinder2(10, 10);
  std::cout << "volume : " << cylinder2.volume() << std::endl;

  // Modify our object
  cylinder1.set_base_radius(100);
  cylinder1.set_height(10);

  std::cout << "volume : " << cylinder1.volume() << std::endl;
}
