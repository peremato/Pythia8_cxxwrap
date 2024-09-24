// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::GammaPoint> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::GammaPoint> : std::false_type { };
template<> struct SuperType<Pythia8::GammaPoint> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::GammaPoint
// signature to use in the veto file: Pythia8::GammaPoint
struct JlPythia8_GammaPoint: public Wrapper {

  JlPythia8_GammaPoint(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::GammaPoint (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:912:7
    jlcxx::TypeWrapper<Pythia8::GammaPoint>  t = jlModule.add_type<Pythia8::GammaPoint>("Pythia8!GammaPoint",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::GammaPoint>>(new jlcxx::TypeWrapper<Pythia8::GammaPoint>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::GammaPoint::GammaPoint(int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:917:3
    t.constructor<int>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::GammaPoint>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_GammaPoint(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_GammaPoint(module));
}
