// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::GRVpiL> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::GRVpiL> : std::false_type { };
template<> struct SuperType<Pythia8::GRVpiL> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::GRVpiL
// signature to use in the veto file: Pythia8::GRVpiL
struct JlPythia8_GRVpiL: public Wrapper {

  JlPythia8_GRVpiL(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::GRVpiL (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:497:7
    jlcxx::TypeWrapper<Pythia8::GRVpiL>  t = jlModule.add_type<Pythia8::GRVpiL>("Pythia8!GRVpiL",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::GRVpiL>>(new jlcxx::TypeWrapper<Pythia8::GRVpiL>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::GRVpiL::GRVpiL(int, double) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:502:3
    t.constructor<int>(/*finalize=*/true);
    t.constructor<int, double>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::GRVpiL::setVMDscale(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::GRVpiL::setVMDscale(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:506:8
    t.method("setVMDscale", static_cast<void (Pythia8::GRVpiL::*)(double) >(&Pythia8::GRVpiL::setVMDscale));
    t.method("setVMDscale", [](Pythia8::GRVpiL& a)->void { a.setVMDscale(); });
    t.method("setVMDscale", [](Pythia8::GRVpiL* a)->void { a->setVMDscale(); });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::GRVpiL>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_GRVpiL(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_GRVpiL(module));
}