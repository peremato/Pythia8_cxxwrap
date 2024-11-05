// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::SubCollisionSet> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::SubCollisionSet> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::SubCollisionSet
// signature to use in the veto file: Pythia8::SubCollisionSet
struct JlPythia8_SubCollisionSet: public Wrapper {

  JlPythia8_SubCollisionSet(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::SubCollisionSet (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HISubCollisionModel.h:84:7
    jlcxx::TypeWrapper<Pythia8::SubCollisionSet>  t = jlModule.add_type<Pythia8::SubCollisionSet>("Pythia8!SubCollisionSet");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SubCollisionSet>>(new jlcxx::TypeWrapper<Pythia8::SubCollisionSet>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SubCollisionSet>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_SubCollisionSet(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_SubCollisionSet(module));
}
