// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::CoupSUSY> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::CoupSUSY> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::CoupSUSY
// signature to use in the veto file: Pythia8::CoupSUSY
struct JlPythia8_CoupSUSY: public Wrapper {

  JlPythia8_CoupSUSY(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::CoupSUSY (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SusyCouplings.h:27:7
    jlcxx::TypeWrapper<Pythia8::CoupSUSY>  t = jlModule.add_type<Pythia8::CoupSUSY>("Pythia8!CoupSUSY");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::CoupSUSY>>(new jlcxx::TypeWrapper<Pythia8::CoupSUSY>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::CoupSUSY>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_CoupSUSY(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_CoupSUSY(module));
}
