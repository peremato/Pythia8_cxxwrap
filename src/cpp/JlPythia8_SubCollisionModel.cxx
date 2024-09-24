// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::SubCollisionModel> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::SubCollisionModel> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::SubCollisionModel
// signature to use in the veto file: Pythia8::SubCollisionModel
struct JlPythia8_SubCollisionModel: public Wrapper {

  JlPythia8_SubCollisionModel(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::SubCollisionModel (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HISubCollisionModel.h:121:7
    jlcxx::TypeWrapper<Pythia8::SubCollisionModel>  t = jlModule.add_type<Pythia8::SubCollisionModel>("Pythia8!SubCollisionModel");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SubCollisionModel>>(new jlcxx::TypeWrapper<Pythia8::SubCollisionModel>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SubCollisionModel>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_SubCollisionModel(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_SubCollisionModel(module));
}
