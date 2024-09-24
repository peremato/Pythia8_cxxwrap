// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::SLHAinterface> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::SLHAinterface> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::SLHAinterface
// signature to use in the veto file: Pythia8::SLHAinterface
struct JlPythia8_SLHAinterface: public Wrapper {

  JlPythia8_SLHAinterface(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::SLHAinterface (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SLHAinterface.h:27:7
    jlcxx::TypeWrapper<Pythia8::SLHAinterface>  t = jlModule.add_type<Pythia8::SLHAinterface>("Pythia8!SLHAinterface");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SLHAinterface>>(new jlcxx::TypeWrapper<Pythia8::SLHAinterface>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SLHAinterface>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_SLHAinterface(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_SLHAinterface(module));
}
