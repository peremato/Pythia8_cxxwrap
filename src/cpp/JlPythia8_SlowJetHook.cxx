// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::SlowJetHook> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::SlowJetHook> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::SlowJetHook
// signature to use in the veto file: Pythia8::SlowJetHook
struct JlPythia8_SlowJetHook: public Wrapper {

  JlPythia8_SlowJetHook(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::SlowJetHook (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:371:7
    jlcxx::TypeWrapper<Pythia8::SlowJetHook>  t = jlModule.add_type<Pythia8::SlowJetHook>("Pythia8!SlowJetHook");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SlowJetHook>>(new jlcxx::TypeWrapper<Pythia8::SlowJetHook>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SlowJetHook>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_SlowJetHook(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_SlowJetHook(module));
}
