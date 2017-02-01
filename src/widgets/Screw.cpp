#include "scene.hpp"


namespace rack {

Screw::Screw() {
	box.size = Vec(15, 15);
	spriteOffset = Vec(-7, -7);
	spriteSize = Vec(29, 29);
	spriteImage = Image::load("res/screw.png");

	index = randomu32() % 5;
}


} // namespace rack