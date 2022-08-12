//#include "imgui.h"
//#include "imgui_impl_glfw.h"
//#include "imgui_impl_opengl3.h"

#include <iostream>


int main(int argc, char** argv)
{
  if (argc > 1)
  {
    std::cout << "Additional argument '" << argv[1] << "' was given! FAIL!" << std::endl;
    return 1;
  }
  std::cout << "Hello World!\n";
  return 0;
}