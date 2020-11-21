#ifndef CMDSTAN_ARGUMENTS_ARG_AAPS_HPP
#define CMDSTAN_ARGUMENTS_ARG_AAPS_HPP

#include <cmdstan/arguments/categorical_argument.hpp>

namespace cmdstan {

class arg_aaps : public categorical_argument {
 public:
  arg_aaps() {
    _name = "aaps";
    _description = "The Apogee to Apogee Path Sampler";
  }
};

}  // namespace cmdstan
#endif
