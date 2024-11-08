// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::SingleClusterJet> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::SingleClusterJet> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::SingleClusterJet
// signature to use in the veto file: Pythia8::SingleClusterJet
struct JlPythia8_SingleClusterJet: public Wrapper {

  JlPythia8_SingleClusterJet(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::SingleClusterJet (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:128:7
    jlcxx::TypeWrapper<Pythia8::SingleClusterJet>  t = jlModule.add_type<Pythia8::SingleClusterJet>("Pythia8!SingleClusterJet");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SingleClusterJet>>(new jlcxx::TypeWrapper<Pythia8::SingleClusterJet>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::SingleClusterJet::SingleClusterJet(Pythia8::Vec4, int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:133:3
    t.constructor<Pythia8::Vec4>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<Pythia8::Vec4, int>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::SingleClusterJet::SingleClusterJet(const Pythia8::SingleClusterJet &) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:136:3
    t.constructor<const Pythia8::SingleClusterJet &>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for Pythia8::SingleClusterJet & Pythia8::SingleClusterJet::operator=(const Pythia8::SingleClusterJet &) (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::SingleClusterJet & Pythia8::SingleClusterJet::operator=(const Pythia8::SingleClusterJet &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:140:21
    t.method("assign", static_cast<Pythia8::SingleClusterJet & (Pythia8::SingleClusterJet::*)(const Pythia8::SingleClusterJet &) >(&Pythia8::SingleClusterJet::operator=));

    DEBUG_MSG("Adding pJet methods  to provide read access to the field pJet (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:148:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::pJet
    t.method("pJet", [](const Pythia8::SingleClusterJet& a) -> const Pythia8::Vec4& { return a.pJet; });
    t.method("pJet", [](Pythia8::SingleClusterJet& a) -> Pythia8::Vec4& { return a.pJet; });
    t.method("pJet", [](const Pythia8::SingleClusterJet* a) -> const Pythia8::Vec4& { return a->pJet; });
    t.method("pJet", [](Pythia8::SingleClusterJet* a) -> Pythia8::Vec4& { return a->pJet; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:148:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::pJet
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding pJet! methods to provide write access to the field pJet (" __HERE__ ")");
    t.method("pJet!", [](Pythia8::SingleClusterJet& a, const Pythia8::Vec4& val) -> Pythia8::Vec4& { return a.pJet = val; });

    DEBUG_MSG("Adding pJet! methods to provide write access to the field pJet (" __HERE__ ")");
    t.method("pJet!", [](Pythia8::SingleClusterJet* a, const Pythia8::Vec4& val) -> Pythia8::Vec4& { return a->pJet = val; });

    DEBUG_MSG("Adding mother methods  to provide read access to the field mother (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:149:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::mother
    t.method("mother", [](const Pythia8::SingleClusterJet& a) -> int { return a.mother; });
    t.method("mother", [](Pythia8::SingleClusterJet& a) -> int { return a.mother; });
    t.method("mother", [](const Pythia8::SingleClusterJet* a) -> int { return a->mother; });
    t.method("mother", [](Pythia8::SingleClusterJet* a) -> int { return a->mother; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:149:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::mother
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding mother! methods to provide write access to the field mother (" __HERE__ ")");
    t.method("mother!", [](Pythia8::SingleClusterJet& a, int val) -> int { return a.mother = val; });

    DEBUG_MSG("Adding mother! methods to provide write access to the field mother (" __HERE__ ")");
    t.method("mother!", [](Pythia8::SingleClusterJet* a, int val) -> int { return a->mother = val; });

    DEBUG_MSG("Adding daughter methods  to provide read access to the field daughter (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:149:18
    // signature to use in the veto list: Pythia8::SingleClusterJet::daughter
    t.method("daughter", [](const Pythia8::SingleClusterJet& a) -> int { return a.daughter; });
    t.method("daughter", [](Pythia8::SingleClusterJet& a) -> int { return a.daughter; });
    t.method("daughter", [](const Pythia8::SingleClusterJet* a) -> int { return a->daughter; });
    t.method("daughter", [](Pythia8::SingleClusterJet* a) -> int { return a->daughter; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:149:18
    // signature to use in the veto list: Pythia8::SingleClusterJet::daughter
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding daughter! methods to provide write access to the field daughter (" __HERE__ ")");
    t.method("daughter!", [](Pythia8::SingleClusterJet& a, int val) -> int { return a.daughter = val; });

    DEBUG_MSG("Adding daughter! methods to provide write access to the field daughter (" __HERE__ ")");
    t.method("daughter!", [](Pythia8::SingleClusterJet* a, int val) -> int { return a->daughter = val; });

    DEBUG_MSG("Adding multiplicity methods  to provide read access to the field multiplicity (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:149:28
    // signature to use in the veto list: Pythia8::SingleClusterJet::multiplicity
    t.method("multiplicity", [](const Pythia8::SingleClusterJet& a) -> int { return a.multiplicity; });
    t.method("multiplicity", [](Pythia8::SingleClusterJet& a) -> int { return a.multiplicity; });
    t.method("multiplicity", [](const Pythia8::SingleClusterJet* a) -> int { return a->multiplicity; });
    t.method("multiplicity", [](Pythia8::SingleClusterJet* a) -> int { return a->multiplicity; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:149:28
    // signature to use in the veto list: Pythia8::SingleClusterJet::multiplicity
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding multiplicity! methods to provide write access to the field multiplicity (" __HERE__ ")");
    t.method("multiplicity!", [](Pythia8::SingleClusterJet& a, int val) -> int { return a.multiplicity = val; });

    DEBUG_MSG("Adding multiplicity! methods to provide write access to the field multiplicity (" __HERE__ ")");
    t.method("multiplicity!", [](Pythia8::SingleClusterJet* a, int val) -> int { return a->multiplicity = val; });

    DEBUG_MSG("Adding isAssigned methods  to provide read access to the field isAssigned (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:150:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::isAssigned
    t.method("isAssigned", [](const Pythia8::SingleClusterJet& a) -> bool { return a.isAssigned; });
    t.method("isAssigned", [](Pythia8::SingleClusterJet& a) -> bool { return a.isAssigned; });
    t.method("isAssigned", [](const Pythia8::SingleClusterJet* a) -> bool { return a->isAssigned; });
    t.method("isAssigned", [](Pythia8::SingleClusterJet* a) -> bool { return a->isAssigned; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:150:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::isAssigned
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding isAssigned! methods to provide write access to the field isAssigned (" __HERE__ ")");
    t.method("isAssigned!", [](Pythia8::SingleClusterJet& a, bool val) -> bool { return a.isAssigned = val; });

    DEBUG_MSG("Adding isAssigned! methods to provide write access to the field isAssigned (" __HERE__ ")");
    t.method("isAssigned!", [](Pythia8::SingleClusterJet* a, bool val) -> bool { return a->isAssigned = val; });

    DEBUG_MSG("Adding pAbs methods  to provide read access to the field pAbs (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:151:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::pAbs
    t.method("pAbs", [](const Pythia8::SingleClusterJet& a) -> double { return a.pAbs; });
    t.method("pAbs", [](Pythia8::SingleClusterJet& a) -> double { return a.pAbs; });
    t.method("pAbs", [](const Pythia8::SingleClusterJet* a) -> double { return a->pAbs; });
    t.method("pAbs", [](Pythia8::SingleClusterJet* a) -> double { return a->pAbs; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:151:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::pAbs
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding pAbs! methods to provide write access to the field pAbs (" __HERE__ ")");
    t.method("pAbs!", [](Pythia8::SingleClusterJet& a, double val) -> double { return a.pAbs = val; });

    DEBUG_MSG("Adding pAbs! methods to provide write access to the field pAbs (" __HERE__ ")");
    t.method("pAbs!", [](Pythia8::SingleClusterJet* a, double val) -> double { return a->pAbs = val; });

    DEBUG_MSG("Adding pTemp methods  to provide read access to the field pTemp (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:152:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::pTemp
    t.method("pTemp", [](const Pythia8::SingleClusterJet& a) -> const Pythia8::Vec4& { return a.pTemp; });
    t.method("pTemp", [](Pythia8::SingleClusterJet& a) -> Pythia8::Vec4& { return a.pTemp; });
    t.method("pTemp", [](const Pythia8::SingleClusterJet* a) -> const Pythia8::Vec4& { return a->pTemp; });
    t.method("pTemp", [](Pythia8::SingleClusterJet* a) -> Pythia8::Vec4& { return a->pTemp; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:152:10
    // signature to use in the veto list: Pythia8::SingleClusterJet::pTemp
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding pTemp! methods to provide write access to the field pTemp (" __HERE__ ")");
    t.method("pTemp!", [](Pythia8::SingleClusterJet& a, const Pythia8::Vec4& val) -> Pythia8::Vec4& { return a.pTemp = val; });

    DEBUG_MSG("Adding pTemp! methods to provide write access to the field pTemp (" __HERE__ ")");
    t.method("pTemp!", [](Pythia8::SingleClusterJet* a, const Pythia8::Vec4& val) -> Pythia8::Vec4& { return a->pTemp = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SingleClusterJet>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_SingleClusterJet(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_SingleClusterJet(module));
}
