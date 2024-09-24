// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::ResonanceGraviton> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::ResonanceGraviton> : std::false_type { };
template<> struct SuperType<Pythia8::ResonanceGraviton> { typedef Pythia8::ResonanceWidths type; };
}

// Class generating the wrapper for type Pythia8::ResonanceGraviton
// signature to use in the veto file: Pythia8::ResonanceGraviton
struct JlPythia8_ResonanceGraviton: public Wrapper {

  JlPythia8_ResonanceGraviton(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::ResonanceGraviton (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:478:7
    jlcxx::TypeWrapper<Pythia8::ResonanceGraviton>  t = jlModule.add_type<Pythia8::ResonanceGraviton>("Pythia8!ResonanceGraviton",
      jlcxx::julia_base_type<Pythia8::ResonanceWidths>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ResonanceGraviton>>(new jlcxx::TypeWrapper<Pythia8::ResonanceGraviton>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::ResonanceGraviton::ResonanceGraviton(int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:483:3
    t.constructor<int>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ResonanceGraviton>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_ResonanceGraviton(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_ResonanceGraviton(module));
}