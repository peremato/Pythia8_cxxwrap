// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::InBeam> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::InBeam> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::InBeam
// signature to use in the veto file: Pythia8::InBeam
struct JlPythia8_InBeam: public Wrapper {

  JlPythia8_InBeam(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::InBeam (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:51:7
    jlcxx::TypeWrapper<Pythia8::InBeam>  t = jlModule.add_type<Pythia8::InBeam>("Pythia8!InBeam");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::InBeam>>(new jlcxx::TypeWrapper<Pythia8::InBeam>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::InBeam::InBeam(int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:56:3
    t.constructor<int>(/*finalize=*/true);

    DEBUG_MSG("Adding id methods  to provide read access to the field id (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:59:10
    // signature to use in the veto list: Pythia8::InBeam::id
    t.method("id", [](const Pythia8::InBeam& a) -> int { return a.id; });
    t.method("id", [](Pythia8::InBeam& a) -> int { return a.id; });
    t.method("id", [](const Pythia8::InBeam* a) -> int { return a->id; });
    t.method("id", [](Pythia8::InBeam* a) -> int { return a->id; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:59:10
    // signature to use in the veto list: Pythia8::InBeam::id
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding id! methods to provide write access to the field id (" __HERE__ ")");
    t.method("id!", [](Pythia8::InBeam& a, int val) -> int { return a.id = val; });

    DEBUG_MSG("Adding id! methods to provide write access to the field id (" __HERE__ ")");
    t.method("id!", [](Pythia8::InBeam* a, int val) -> int { return a->id = val; });

    DEBUG_MSG("Adding pdf methods  to provide read access to the field pdf (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:60:10
    // signature to use in the veto list: Pythia8::InBeam::pdf
    t.method("pdf", [](const Pythia8::InBeam& a) -> double { return a.pdf; });
    t.method("pdf", [](Pythia8::InBeam& a) -> double { return a.pdf; });
    t.method("pdf", [](const Pythia8::InBeam* a) -> double { return a->pdf; });
    t.method("pdf", [](Pythia8::InBeam* a) -> double { return a->pdf; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:60:10
    // signature to use in the veto list: Pythia8::InBeam::pdf
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding pdf! methods to provide write access to the field pdf (" __HERE__ ")");
    t.method("pdf!", [](Pythia8::InBeam& a, double val) -> double { return a.pdf = val; });

    DEBUG_MSG("Adding pdf! methods to provide write access to the field pdf (" __HERE__ ")");
    t.method("pdf!", [](Pythia8::InBeam* a, double val) -> double { return a->pdf = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::InBeam>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_InBeam(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_InBeam(module));
}
