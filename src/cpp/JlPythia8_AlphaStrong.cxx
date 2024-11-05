// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::AlphaStrong> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::AlphaStrong> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::AlphaStrong
// signature to use in the veto file: Pythia8::AlphaStrong
struct JlPythia8_AlphaStrong: public Wrapper {

  JlPythia8_AlphaStrong(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::AlphaStrong (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/StandardModel.h:23:7
    jlcxx::TypeWrapper<Pythia8::AlphaStrong>  t = jlModule.add_type<Pythia8::AlphaStrong>("Pythia8!AlphaStrong");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::AlphaStrong>>(new jlcxx::TypeWrapper<Pythia8::AlphaStrong>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::AlphaStrong>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_AlphaStrong(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_AlphaStrong(module));
}
