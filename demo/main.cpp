#include <iostream>
#include <Builder.hpp>

namespace po = boost::program_options;
namespace bp = boost::process;

int main(int argc, char *argv[])
{
  Builder build;
  if (build.initBuild(argc, argv))
  {
    return EXIT_SUCCESS;
  }
  return build.startBuild();
}