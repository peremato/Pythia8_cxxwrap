// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::DecayHandler> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::DecayHandler> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::DecayHandler
// signature to use in the veto file: Pythia8::DecayHandler
struct JlPythia8_DecayHandler: public Wrapper {

  JlPythia8_DecayHandler(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::DecayHandler (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ParticleDecays.h:31:7
    jlcxx::TypeWrapper<Pythia8::DecayHandler>  t = jlModule.add_type<Pythia8::DecayHandler>("Pythia8!DecayHandler");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::DecayHandler>>(new jlcxx::TypeWrapper<Pythia8::DecayHandler>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for bool Pythia8::DecayHandler::decay(std::vector<int> &, std::vector<double> &, std::vector<Pythia8::Vec4> &, int, const Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::DecayHandler::decay(std::vector<int> &, std::vector<double> &, std::vector<Pythia8::Vec4> &, int, const Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ParticleDecays.h:40:16
    t.method("decay", static_cast<bool (Pythia8::DecayHandler::*)(std::vector<int> &, std::vector<double> &, std::vector<Pythia8::Vec4> &, int, const Pythia8::Event &) >(&Pythia8::DecayHandler::decay));

    DEBUG_MSG("Adding wrapper for bool Pythia8::DecayHandler::chainDecay(std::vector<int> &, std::vector<int> &, std::vector<double> &, std::vector<Pythia8::Vec4> &, int, const Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::DecayHandler::chainDecay(std::vector<int> &, std::vector<int> &, std::vector<double> &, std::vector<Pythia8::Vec4> &, int, const Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ParticleDecays.h:45:16
    t.method("chainDecay", static_cast<bool (Pythia8::DecayHandler::*)(std::vector<int> &, std::vector<int> &, std::vector<double> &, std::vector<Pythia8::Vec4> &, int, const Pythia8::Event &) >(&Pythia8::DecayHandler::chainDecay));

    DEBUG_MSG("Adding wrapper for std::vector<int> Pythia8::DecayHandler::handledParticles() (" __HERE__ ")");
    // signature to use in the veto list: std::vector<int> Pythia8::DecayHandler::handledParticles()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ParticleDecays.h:49:23
    t.method("handledParticles", static_cast<std::vector<int> (Pythia8::DecayHandler::*)() >(&Pythia8::DecayHandler::handledParticles));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::DecayHandler>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_DecayHandler(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_DecayHandler(module));
}