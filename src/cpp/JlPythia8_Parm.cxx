// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Parm> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Parm> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::Parm
// signature to use in the veto file: Pythia8::Parm
struct JlPythia8_Parm: public Wrapper {

  JlPythia8_Parm(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Parm (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:71:7
    jlcxx::TypeWrapper<Pythia8::Parm>  t = jlModule.add_type<Pythia8::Parm>("Pythia8!Parm");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Parm>>(new jlcxx::TypeWrapper<Pythia8::Parm>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::Parm::Parm(std::string, double, bool, bool, double, double) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:76:3
    t.constructor<std::string>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, double, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, double, bool, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, double, bool, bool, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, double, bool, bool, double, double>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding name methods  to provide read access to the field name (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:83:10
    // signature to use in the veto list: Pythia8::Parm::name
    t.method("name", [](const Pythia8::Parm& a) -> const std::string& { return a.name; });
    t.method("name", [](Pythia8::Parm& a) -> std::string& { return a.name; });
    t.method("name", [](const Pythia8::Parm* a) -> const std::string& { return a->name; });
    t.method("name", [](Pythia8::Parm* a) -> std::string& { return a->name; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:83:10
    // signature to use in the veto list: Pythia8::Parm::name
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding name! methods to provide write access to the field name (" __HERE__ ")");
    t.method("name!", [](Pythia8::Parm& a, const std::string& val) -> std::string& { return a.name = val; });

    DEBUG_MSG("Adding name! methods to provide write access to the field name (" __HERE__ ")");
    t.method("name!", [](Pythia8::Parm* a, const std::string& val) -> std::string& { return a->name = val; });

    DEBUG_MSG("Adding valNow methods  to provide read access to the field valNow (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:84:10
    // signature to use in the veto list: Pythia8::Parm::valNow
    t.method("valNow", [](const Pythia8::Parm& a) -> double { return a.valNow; });
    t.method("valNow", [](Pythia8::Parm& a) -> double { return a.valNow; });
    t.method("valNow", [](const Pythia8::Parm* a) -> double { return a->valNow; });
    t.method("valNow", [](Pythia8::Parm* a) -> double { return a->valNow; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:84:10
    // signature to use in the veto list: Pythia8::Parm::valNow
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valNow! methods to provide write access to the field valNow (" __HERE__ ")");
    t.method("valNow!", [](Pythia8::Parm& a, double val) -> double { return a.valNow = val; });

    DEBUG_MSG("Adding valNow! methods to provide write access to the field valNow (" __HERE__ ")");
    t.method("valNow!", [](Pythia8::Parm* a, double val) -> double { return a->valNow = val; });

    DEBUG_MSG("Adding valDefault methods  to provide read access to the field valDefault (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:84:18
    // signature to use in the veto list: Pythia8::Parm::valDefault
    t.method("valDefault", [](const Pythia8::Parm& a) -> double { return a.valDefault; });
    t.method("valDefault", [](Pythia8::Parm& a) -> double { return a.valDefault; });
    t.method("valDefault", [](const Pythia8::Parm* a) -> double { return a->valDefault; });
    t.method("valDefault", [](Pythia8::Parm* a) -> double { return a->valDefault; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:84:18
    // signature to use in the veto list: Pythia8::Parm::valDefault
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valDefault! methods to provide write access to the field valDefault (" __HERE__ ")");
    t.method("valDefault!", [](Pythia8::Parm& a, double val) -> double { return a.valDefault = val; });

    DEBUG_MSG("Adding valDefault! methods to provide write access to the field valDefault (" __HERE__ ")");
    t.method("valDefault!", [](Pythia8::Parm* a, double val) -> double { return a->valDefault = val; });

    DEBUG_MSG("Adding hasMin methods  to provide read access to the field hasMin (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:85:10
    // signature to use in the veto list: Pythia8::Parm::hasMin
    t.method("hasMin", [](const Pythia8::Parm& a) -> bool { return a.hasMin; });
    t.method("hasMin", [](Pythia8::Parm& a) -> bool { return a.hasMin; });
    t.method("hasMin", [](const Pythia8::Parm* a) -> bool { return a->hasMin; });
    t.method("hasMin", [](Pythia8::Parm* a) -> bool { return a->hasMin; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:85:10
    // signature to use in the veto list: Pythia8::Parm::hasMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hasMin! methods to provide write access to the field hasMin (" __HERE__ ")");
    t.method("hasMin!", [](Pythia8::Parm& a, bool val) -> bool { return a.hasMin = val; });

    DEBUG_MSG("Adding hasMin! methods to provide write access to the field hasMin (" __HERE__ ")");
    t.method("hasMin!", [](Pythia8::Parm* a, bool val) -> bool { return a->hasMin = val; });

    DEBUG_MSG("Adding hasMax methods  to provide read access to the field hasMax (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:85:18
    // signature to use in the veto list: Pythia8::Parm::hasMax
    t.method("hasMax", [](const Pythia8::Parm& a) -> bool { return a.hasMax; });
    t.method("hasMax", [](Pythia8::Parm& a) -> bool { return a.hasMax; });
    t.method("hasMax", [](const Pythia8::Parm* a) -> bool { return a->hasMax; });
    t.method("hasMax", [](Pythia8::Parm* a) -> bool { return a->hasMax; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:85:18
    // signature to use in the veto list: Pythia8::Parm::hasMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hasMax! methods to provide write access to the field hasMax (" __HERE__ ")");
    t.method("hasMax!", [](Pythia8::Parm& a, bool val) -> bool { return a.hasMax = val; });

    DEBUG_MSG("Adding hasMax! methods to provide write access to the field hasMax (" __HERE__ ")");
    t.method("hasMax!", [](Pythia8::Parm* a, bool val) -> bool { return a->hasMax = val; });

    DEBUG_MSG("Adding valMin methods  to provide read access to the field valMin (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:86:10
    // signature to use in the veto list: Pythia8::Parm::valMin
    t.method("valMin", [](const Pythia8::Parm& a) -> double { return a.valMin; });
    t.method("valMin", [](Pythia8::Parm& a) -> double { return a.valMin; });
    t.method("valMin", [](const Pythia8::Parm* a) -> double { return a->valMin; });
    t.method("valMin", [](Pythia8::Parm* a) -> double { return a->valMin; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:86:10
    // signature to use in the veto list: Pythia8::Parm::valMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valMin! methods to provide write access to the field valMin (" __HERE__ ")");
    t.method("valMin!", [](Pythia8::Parm& a, double val) -> double { return a.valMin = val; });

    DEBUG_MSG("Adding valMin! methods to provide write access to the field valMin (" __HERE__ ")");
    t.method("valMin!", [](Pythia8::Parm* a, double val) -> double { return a->valMin = val; });

    DEBUG_MSG("Adding valMax methods  to provide read access to the field valMax (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:86:18
    // signature to use in the veto list: Pythia8::Parm::valMax
    t.method("valMax", [](const Pythia8::Parm& a) -> double { return a.valMax; });
    t.method("valMax", [](Pythia8::Parm& a) -> double { return a.valMax; });
    t.method("valMax", [](const Pythia8::Parm* a) -> double { return a->valMax; });
    t.method("valMax", [](Pythia8::Parm* a) -> double { return a->valMax; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:86:18
    // signature to use in the veto list: Pythia8::Parm::valMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valMax! methods to provide write access to the field valMax (" __HERE__ ")");
    t.method("valMax!", [](Pythia8::Parm& a, double val) -> double { return a.valMax = val; });

    DEBUG_MSG("Adding valMax! methods to provide write access to the field valMax (" __HERE__ ")");
    t.method("valMax!", [](Pythia8::Parm* a, double val) -> double { return a->valMax = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Parm>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Parm(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Parm(module));
}
