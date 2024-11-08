// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::EventInfo> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::EventInfo> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::EventInfo
// signature to use in the veto file: Pythia8::EventInfo
struct JlPythia8_EventInfo: public Wrapper {

  JlPythia8_EventInfo(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::EventInfo (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIBasics.h:47:7
    jlcxx::TypeWrapper<Pythia8::EventInfo>  t = jlModule.add_type<Pythia8::EventInfo>("Pythia8!EventInfo");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::EventInfo>>(new jlcxx::TypeWrapper<Pythia8::EventInfo>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::EventInfo>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_EventInfo(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_EventInfo(module));
}
