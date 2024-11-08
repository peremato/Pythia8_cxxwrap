// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::MVec> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::MVec> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::MVec
// signature to use in the veto file: Pythia8::MVec
struct JlPythia8_MVec: public Wrapper {

  JlPythia8_MVec(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::MVec (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:129:7
    jlcxx::TypeWrapper<Pythia8::MVec>  t = jlModule.add_type<Pythia8::MVec>("Pythia8!MVec");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::MVec>>(new jlcxx::TypeWrapper<Pythia8::MVec>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::MVec::MVec(std::string, std::vector<int>, bool, bool, int, int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:134:3
    t.constructor<std::string>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<int>>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<int>, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<int>, bool, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<int>, bool, bool, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<int>, bool, bool, int, int>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding name methods  to provide read access to the field name (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:141:10
    // signature to use in the veto list: Pythia8::MVec::name
    t.method("name", [](const Pythia8::MVec& a) -> const std::string& { return a.name; });
    t.method("name", [](Pythia8::MVec& a) -> std::string& { return a.name; });
    t.method("name", [](const Pythia8::MVec* a) -> const std::string& { return a->name; });
    t.method("name", [](Pythia8::MVec* a) -> std::string& { return a->name; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:141:10
    // signature to use in the veto list: Pythia8::MVec::name
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding name! methods to provide write access to the field name (" __HERE__ ")");
    t.method("name!", [](Pythia8::MVec& a, const std::string& val) -> std::string& { return a.name = val; });

    DEBUG_MSG("Adding name! methods to provide write access to the field name (" __HERE__ ")");
    t.method("name!", [](Pythia8::MVec* a, const std::string& val) -> std::string& { return a->name = val; });

    DEBUG_MSG("Adding valNow methods  to provide read access to the field valNow (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:142:15
    // signature to use in the veto list: Pythia8::MVec::valNow
    t.method("valNow", [](const Pythia8::MVec& a) -> const std::vector<int>& { return a.valNow; });
    t.method("valNow", [](Pythia8::MVec& a) -> std::vector<int>& { return a.valNow; });
    t.method("valNow", [](const Pythia8::MVec* a) -> const std::vector<int>& { return a->valNow; });
    t.method("valNow", [](Pythia8::MVec* a) -> std::vector<int>& { return a->valNow; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:142:15
    // signature to use in the veto list: Pythia8::MVec::valNow
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valNow! methods to provide write access to the field valNow (" __HERE__ ")");
    t.method("valNow!", [](Pythia8::MVec& a, const std::vector<int>& val) -> std::vector<int>& { return a.valNow = val; });

    DEBUG_MSG("Adding valNow! methods to provide write access to the field valNow (" __HERE__ ")");
    t.method("valNow!", [](Pythia8::MVec* a, const std::vector<int>& val) -> std::vector<int>& { return a->valNow = val; });

    DEBUG_MSG("Adding valDefault methods  to provide read access to the field valDefault (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:142:23
    // signature to use in the veto list: Pythia8::MVec::valDefault
    t.method("valDefault", [](const Pythia8::MVec& a) -> const std::vector<int>& { return a.valDefault; });
    t.method("valDefault", [](Pythia8::MVec& a) -> std::vector<int>& { return a.valDefault; });
    t.method("valDefault", [](const Pythia8::MVec* a) -> const std::vector<int>& { return a->valDefault; });
    t.method("valDefault", [](Pythia8::MVec* a) -> std::vector<int>& { return a->valDefault; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:142:23
    // signature to use in the veto list: Pythia8::MVec::valDefault
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valDefault! methods to provide write access to the field valDefault (" __HERE__ ")");
    t.method("valDefault!", [](Pythia8::MVec& a, const std::vector<int>& val) -> std::vector<int>& { return a.valDefault = val; });

    DEBUG_MSG("Adding valDefault! methods to provide write access to the field valDefault (" __HERE__ ")");
    t.method("valDefault!", [](Pythia8::MVec* a, const std::vector<int>& val) -> std::vector<int>& { return a->valDefault = val; });

    DEBUG_MSG("Adding hasMin methods  to provide read access to the field hasMin (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:143:10
    // signature to use in the veto list: Pythia8::MVec::hasMin
    t.method("hasMin", [](const Pythia8::MVec& a) -> bool { return a.hasMin; });
    t.method("hasMin", [](Pythia8::MVec& a) -> bool { return a.hasMin; });
    t.method("hasMin", [](const Pythia8::MVec* a) -> bool { return a->hasMin; });
    t.method("hasMin", [](Pythia8::MVec* a) -> bool { return a->hasMin; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:143:10
    // signature to use in the veto list: Pythia8::MVec::hasMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hasMin! methods to provide write access to the field hasMin (" __HERE__ ")");
    t.method("hasMin!", [](Pythia8::MVec& a, bool val) -> bool { return a.hasMin = val; });

    DEBUG_MSG("Adding hasMin! methods to provide write access to the field hasMin (" __HERE__ ")");
    t.method("hasMin!", [](Pythia8::MVec* a, bool val) -> bool { return a->hasMin = val; });

    DEBUG_MSG("Adding hasMax methods  to provide read access to the field hasMax (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:143:18
    // signature to use in the veto list: Pythia8::MVec::hasMax
    t.method("hasMax", [](const Pythia8::MVec& a) -> bool { return a.hasMax; });
    t.method("hasMax", [](Pythia8::MVec& a) -> bool { return a.hasMax; });
    t.method("hasMax", [](const Pythia8::MVec* a) -> bool { return a->hasMax; });
    t.method("hasMax", [](Pythia8::MVec* a) -> bool { return a->hasMax; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:143:18
    // signature to use in the veto list: Pythia8::MVec::hasMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hasMax! methods to provide write access to the field hasMax (" __HERE__ ")");
    t.method("hasMax!", [](Pythia8::MVec& a, bool val) -> bool { return a.hasMax = val; });

    DEBUG_MSG("Adding hasMax! methods to provide write access to the field hasMax (" __HERE__ ")");
    t.method("hasMax!", [](Pythia8::MVec* a, bool val) -> bool { return a->hasMax = val; });

    DEBUG_MSG("Adding valMin methods  to provide read access to the field valMin (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:144:10
    // signature to use in the veto list: Pythia8::MVec::valMin
    t.method("valMin", [](const Pythia8::MVec& a) -> int { return a.valMin; });
    t.method("valMin", [](Pythia8::MVec& a) -> int { return a.valMin; });
    t.method("valMin", [](const Pythia8::MVec* a) -> int { return a->valMin; });
    t.method("valMin", [](Pythia8::MVec* a) -> int { return a->valMin; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:144:10
    // signature to use in the veto list: Pythia8::MVec::valMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valMin! methods to provide write access to the field valMin (" __HERE__ ")");
    t.method("valMin!", [](Pythia8::MVec& a, int val) -> int { return a.valMin = val; });

    DEBUG_MSG("Adding valMin! methods to provide write access to the field valMin (" __HERE__ ")");
    t.method("valMin!", [](Pythia8::MVec* a, int val) -> int { return a->valMin = val; });

    DEBUG_MSG("Adding valMax methods  to provide read access to the field valMax (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:144:18
    // signature to use in the veto list: Pythia8::MVec::valMax
    t.method("valMax", [](const Pythia8::MVec& a) -> int { return a.valMax; });
    t.method("valMax", [](Pythia8::MVec& a) -> int { return a.valMax; });
    t.method("valMax", [](const Pythia8::MVec* a) -> int { return a->valMax; });
    t.method("valMax", [](Pythia8::MVec* a) -> int { return a->valMax; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:144:18
    // signature to use in the veto list: Pythia8::MVec::valMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valMax! methods to provide write access to the field valMax (" __HERE__ ")");
    t.method("valMax!", [](Pythia8::MVec& a, int val) -> int { return a.valMax = val; });

    DEBUG_MSG("Adding valMax! methods to provide write access to the field valMax (" __HERE__ ")");
    t.method("valMax!", [](Pythia8::MVec* a, int val) -> int { return a->valMax = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::MVec>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_MVec(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_MVec(module));
}
