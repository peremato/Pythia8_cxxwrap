// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Mode> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Mode> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::Mode
// signature to use in the veto file: Pythia8::Mode
struct JlPythia8_Mode: public Wrapper {

  JlPythia8_Mode(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Mode (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:47:7
    jlcxx::TypeWrapper<Pythia8::Mode>  t = jlModule.add_type<Pythia8::Mode>("Pythia8!Mode");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Mode>>(new jlcxx::TypeWrapper<Pythia8::Mode>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::Mode::Mode(std::string, int, bool, bool, int, int, bool) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:52:3
    t.constructor<std::string>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, int, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, int, bool, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, int, bool, bool, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, int, bool, bool, int, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, int, bool, bool, int, int, bool>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding name methods  to provide read access to the field name (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:59:10
    // signature to use in the veto list: Pythia8::Mode::name
    t.method("name", [](const Pythia8::Mode& a) -> const std::string& { return a.name; });
    t.method("name", [](Pythia8::Mode& a) -> std::string& { return a.name; });
    t.method("name", [](const Pythia8::Mode* a) -> const std::string& { return a->name; });
    t.method("name", [](Pythia8::Mode* a) -> std::string& { return a->name; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:59:10
    // signature to use in the veto list: Pythia8::Mode::name
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding name! methods to provide write access to the field name (" __HERE__ ")");
    t.method("name!", [](Pythia8::Mode& a, const std::string& val) -> std::string& { return a.name = val; });

    DEBUG_MSG("Adding name! methods to provide write access to the field name (" __HERE__ ")");
    t.method("name!", [](Pythia8::Mode* a, const std::string& val) -> std::string& { return a->name = val; });

    DEBUG_MSG("Adding valNow methods  to provide read access to the field valNow (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:60:10
    // signature to use in the veto list: Pythia8::Mode::valNow
    t.method("valNow", [](const Pythia8::Mode& a) -> int { return a.valNow; });
    t.method("valNow", [](Pythia8::Mode& a) -> int { return a.valNow; });
    t.method("valNow", [](const Pythia8::Mode* a) -> int { return a->valNow; });
    t.method("valNow", [](Pythia8::Mode* a) -> int { return a->valNow; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:60:10
    // signature to use in the veto list: Pythia8::Mode::valNow
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valNow! methods to provide write access to the field valNow (" __HERE__ ")");
    t.method("valNow!", [](Pythia8::Mode& a, int val) -> int { return a.valNow = val; });

    DEBUG_MSG("Adding valNow! methods to provide write access to the field valNow (" __HERE__ ")");
    t.method("valNow!", [](Pythia8::Mode* a, int val) -> int { return a->valNow = val; });

    DEBUG_MSG("Adding valDefault methods  to provide read access to the field valDefault (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:60:18
    // signature to use in the veto list: Pythia8::Mode::valDefault
    t.method("valDefault", [](const Pythia8::Mode& a) -> int { return a.valDefault; });
    t.method("valDefault", [](Pythia8::Mode& a) -> int { return a.valDefault; });
    t.method("valDefault", [](const Pythia8::Mode* a) -> int { return a->valDefault; });
    t.method("valDefault", [](Pythia8::Mode* a) -> int { return a->valDefault; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:60:18
    // signature to use in the veto list: Pythia8::Mode::valDefault
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valDefault! methods to provide write access to the field valDefault (" __HERE__ ")");
    t.method("valDefault!", [](Pythia8::Mode& a, int val) -> int { return a.valDefault = val; });

    DEBUG_MSG("Adding valDefault! methods to provide write access to the field valDefault (" __HERE__ ")");
    t.method("valDefault!", [](Pythia8::Mode* a, int val) -> int { return a->valDefault = val; });

    DEBUG_MSG("Adding hasMin methods  to provide read access to the field hasMin (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:61:10
    // signature to use in the veto list: Pythia8::Mode::hasMin
    t.method("hasMin", [](const Pythia8::Mode& a) -> bool { return a.hasMin; });
    t.method("hasMin", [](Pythia8::Mode& a) -> bool { return a.hasMin; });
    t.method("hasMin", [](const Pythia8::Mode* a) -> bool { return a->hasMin; });
    t.method("hasMin", [](Pythia8::Mode* a) -> bool { return a->hasMin; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:61:10
    // signature to use in the veto list: Pythia8::Mode::hasMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hasMin! methods to provide write access to the field hasMin (" __HERE__ ")");
    t.method("hasMin!", [](Pythia8::Mode& a, bool val) -> bool { return a.hasMin = val; });

    DEBUG_MSG("Adding hasMin! methods to provide write access to the field hasMin (" __HERE__ ")");
    t.method("hasMin!", [](Pythia8::Mode* a, bool val) -> bool { return a->hasMin = val; });

    DEBUG_MSG("Adding hasMax methods  to provide read access to the field hasMax (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:61:18
    // signature to use in the veto list: Pythia8::Mode::hasMax
    t.method("hasMax", [](const Pythia8::Mode& a) -> bool { return a.hasMax; });
    t.method("hasMax", [](Pythia8::Mode& a) -> bool { return a.hasMax; });
    t.method("hasMax", [](const Pythia8::Mode* a) -> bool { return a->hasMax; });
    t.method("hasMax", [](Pythia8::Mode* a) -> bool { return a->hasMax; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:61:18
    // signature to use in the veto list: Pythia8::Mode::hasMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hasMax! methods to provide write access to the field hasMax (" __HERE__ ")");
    t.method("hasMax!", [](Pythia8::Mode& a, bool val) -> bool { return a.hasMax = val; });

    DEBUG_MSG("Adding hasMax! methods to provide write access to the field hasMax (" __HERE__ ")");
    t.method("hasMax!", [](Pythia8::Mode* a, bool val) -> bool { return a->hasMax = val; });

    DEBUG_MSG("Adding valMin methods  to provide read access to the field valMin (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:62:10
    // signature to use in the veto list: Pythia8::Mode::valMin
    t.method("valMin", [](const Pythia8::Mode& a) -> int { return a.valMin; });
    t.method("valMin", [](Pythia8::Mode& a) -> int { return a.valMin; });
    t.method("valMin", [](const Pythia8::Mode* a) -> int { return a->valMin; });
    t.method("valMin", [](Pythia8::Mode* a) -> int { return a->valMin; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:62:10
    // signature to use in the veto list: Pythia8::Mode::valMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valMin! methods to provide write access to the field valMin (" __HERE__ ")");
    t.method("valMin!", [](Pythia8::Mode& a, int val) -> int { return a.valMin = val; });

    DEBUG_MSG("Adding valMin! methods to provide write access to the field valMin (" __HERE__ ")");
    t.method("valMin!", [](Pythia8::Mode* a, int val) -> int { return a->valMin = val; });

    DEBUG_MSG("Adding valMax methods  to provide read access to the field valMax (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:62:18
    // signature to use in the veto list: Pythia8::Mode::valMax
    t.method("valMax", [](const Pythia8::Mode& a) -> int { return a.valMax; });
    t.method("valMax", [](Pythia8::Mode& a) -> int { return a.valMax; });
    t.method("valMax", [](const Pythia8::Mode* a) -> int { return a->valMax; });
    t.method("valMax", [](Pythia8::Mode* a) -> int { return a->valMax; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:62:18
    // signature to use in the veto list: Pythia8::Mode::valMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valMax! methods to provide write access to the field valMax (" __HERE__ ")");
    t.method("valMax!", [](Pythia8::Mode& a, int val) -> int { return a.valMax = val; });

    DEBUG_MSG("Adding valMax! methods to provide write access to the field valMax (" __HERE__ ")");
    t.method("valMax!", [](Pythia8::Mode* a, int val) -> int { return a->valMax = val; });

    DEBUG_MSG("Adding optOnly methods  to provide read access to the field optOnly (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:63:10
    // signature to use in the veto list: Pythia8::Mode::optOnly
    t.method("optOnly", [](const Pythia8::Mode& a) -> bool { return a.optOnly; });
    t.method("optOnly", [](Pythia8::Mode& a) -> bool { return a.optOnly; });
    t.method("optOnly", [](const Pythia8::Mode* a) -> bool { return a->optOnly; });
    t.method("optOnly", [](Pythia8::Mode* a) -> bool { return a->optOnly; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:63:10
    // signature to use in the veto list: Pythia8::Mode::optOnly
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding optOnly! methods to provide write access to the field optOnly (" __HERE__ ")");
    t.method("optOnly!", [](Pythia8::Mode& a, bool val) -> bool { return a.optOnly = val; });

    DEBUG_MSG("Adding optOnly! methods to provide write access to the field optOnly (" __HERE__ ")");
    t.method("optOnly!", [](Pythia8::Mode* a, bool val) -> bool { return a->optOnly = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Mode>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Mode(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Mode(module));
}
