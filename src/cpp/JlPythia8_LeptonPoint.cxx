// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::LeptonPoint> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::LeptonPoint> : std::false_type { };
template<> struct SuperType<Pythia8::LeptonPoint> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::LeptonPoint
// signature to use in the veto file: Pythia8::LeptonPoint
struct JlPythia8_LeptonPoint: public Wrapper {

  JlPythia8_LeptonPoint(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::LeptonPoint (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:772:7
    jlcxx::TypeWrapper<Pythia8::LeptonPoint>  t = jlModule.add_type<Pythia8::LeptonPoint>("Pythia8!LeptonPoint",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::LeptonPoint>>(new jlcxx::TypeWrapper<Pythia8::LeptonPoint>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::LeptonPoint::LeptonPoint(int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:777:3
    t.constructor<int>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::LeptonPoint>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_LeptonPoint(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_LeptonPoint(module));
}
