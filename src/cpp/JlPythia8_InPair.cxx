// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::InPair> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::InPair> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::InPair
// signature to use in the veto file: Pythia8::InPair
struct JlPythia8_InPair: public Wrapper {

  JlPythia8_InPair(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::InPair (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:68:7
    jlcxx::TypeWrapper<Pythia8::InPair>  t = jlModule.add_type<Pythia8::InPair>("Pythia8!InPair");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::InPair>>(new jlcxx::TypeWrapper<Pythia8::InPair>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::InPair::InPair(int, int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:73:3
    t.constructor<int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, int>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding idA methods  to provide read access to the field idA (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:77:10
    // signature to use in the veto list: Pythia8::InPair::idA
    t.method("idA", [](const Pythia8::InPair& a) -> int { return a.idA; });
    t.method("idA", [](Pythia8::InPair& a) -> int { return a.idA; });
    t.method("idA", [](const Pythia8::InPair* a) -> int { return a->idA; });
    t.method("idA", [](Pythia8::InPair* a) -> int { return a->idA; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:77:10
    // signature to use in the veto list: Pythia8::InPair::idA
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding idA! methods to provide write access to the field idA (" __HERE__ ")");
    t.method("idA!", [](Pythia8::InPair& a, int val) -> int { return a.idA = val; });

    DEBUG_MSG("Adding idA! methods to provide write access to the field idA (" __HERE__ ")");
    t.method("idA!", [](Pythia8::InPair* a, int val) -> int { return a->idA = val; });

    DEBUG_MSG("Adding idB methods  to provide read access to the field idB (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:77:15
    // signature to use in the veto list: Pythia8::InPair::idB
    t.method("idB", [](const Pythia8::InPair& a) -> int { return a.idB; });
    t.method("idB", [](Pythia8::InPair& a) -> int { return a.idB; });
    t.method("idB", [](const Pythia8::InPair* a) -> int { return a->idB; });
    t.method("idB", [](Pythia8::InPair* a) -> int { return a->idB; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:77:15
    // signature to use in the veto list: Pythia8::InPair::idB
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding idB! methods to provide write access to the field idB (" __HERE__ ")");
    t.method("idB!", [](Pythia8::InPair& a, int val) -> int { return a.idB = val; });

    DEBUG_MSG("Adding idB! methods to provide write access to the field idB (" __HERE__ ")");
    t.method("idB!", [](Pythia8::InPair* a, int val) -> int { return a->idB = val; });

    DEBUG_MSG("Adding pdfA methods  to provide read access to the field pdfA (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:78:10
    // signature to use in the veto list: Pythia8::InPair::pdfA
    t.method("pdfA", [](const Pythia8::InPair& a) -> double { return a.pdfA; });
    t.method("pdfA", [](Pythia8::InPair& a) -> double { return a.pdfA; });
    t.method("pdfA", [](const Pythia8::InPair* a) -> double { return a->pdfA; });
    t.method("pdfA", [](Pythia8::InPair* a) -> double { return a->pdfA; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:78:10
    // signature to use in the veto list: Pythia8::InPair::pdfA
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding pdfA! methods to provide write access to the field pdfA (" __HERE__ ")");
    t.method("pdfA!", [](Pythia8::InPair& a, double val) -> double { return a.pdfA = val; });

    DEBUG_MSG("Adding pdfA! methods to provide write access to the field pdfA (" __HERE__ ")");
    t.method("pdfA!", [](Pythia8::InPair* a, double val) -> double { return a->pdfA = val; });

    DEBUG_MSG("Adding pdfB methods  to provide read access to the field pdfB (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:78:16
    // signature to use in the veto list: Pythia8::InPair::pdfB
    t.method("pdfB", [](const Pythia8::InPair& a) -> double { return a.pdfB; });
    t.method("pdfB", [](Pythia8::InPair& a) -> double { return a.pdfB; });
    t.method("pdfB", [](const Pythia8::InPair* a) -> double { return a->pdfB; });
    t.method("pdfB", [](Pythia8::InPair* a) -> double { return a->pdfB; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:78:16
    // signature to use in the veto list: Pythia8::InPair::pdfB
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding pdfB! methods to provide write access to the field pdfB (" __HERE__ ")");
    t.method("pdfB!", [](Pythia8::InPair& a, double val) -> double { return a.pdfB = val; });

    DEBUG_MSG("Adding pdfB! methods to provide write access to the field pdfB (" __HERE__ ")");
    t.method("pdfB!", [](Pythia8::InPair* a, double val) -> double { return a->pdfB = val; });

    DEBUG_MSG("Adding pdfSigma methods  to provide read access to the field pdfSigma (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:78:22
    // signature to use in the veto list: Pythia8::InPair::pdfSigma
    t.method("pdfSigma", [](const Pythia8::InPair& a) -> double { return a.pdfSigma; });
    t.method("pdfSigma", [](Pythia8::InPair& a) -> double { return a.pdfSigma; });
    t.method("pdfSigma", [](const Pythia8::InPair* a) -> double { return a->pdfSigma; });
    t.method("pdfSigma", [](Pythia8::InPair* a) -> double { return a->pdfSigma; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:78:22
    // signature to use in the veto list: Pythia8::InPair::pdfSigma
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding pdfSigma! methods to provide write access to the field pdfSigma (" __HERE__ ")");
    t.method("pdfSigma!", [](Pythia8::InPair& a, double val) -> double { return a.pdfSigma = val; });

    DEBUG_MSG("Adding pdfSigma! methods to provide write access to the field pdfSigma (" __HERE__ ")");
    t.method("pdfSigma!", [](Pythia8::InPair* a, double val) -> double { return a->pdfSigma = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::InPair>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_InPair(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_InPair(module));
}
