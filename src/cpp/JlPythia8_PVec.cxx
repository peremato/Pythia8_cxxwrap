// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PVec> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PVec> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::PVec
// signature to use in the veto file: Pythia8::PVec
struct JlPythia8_PVec: public Wrapper {

  JlPythia8_PVec(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PVec (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:152:7
    jlcxx::TypeWrapper<Pythia8::PVec>  t = jlModule.add_type<Pythia8::PVec>("Pythia8!PVec");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PVec>>(new jlcxx::TypeWrapper<Pythia8::PVec>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::PVec::PVec(std::string, std::vector<double>, bool, bool, double, double) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:157:3
    t.constructor<std::string>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<double>>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<double>, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<double>, bool, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<double>, bool, bool, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<std::string, std::vector<double>, bool, bool, double, double>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding name methods  to provide read access to the field name (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:164:10
    // signature to use in the veto list: Pythia8::PVec::name
    t.method("name", [](const Pythia8::PVec& a) -> const std::string& { return a.name; });
    t.method("name", [](Pythia8::PVec& a) -> std::string& { return a.name; });
    t.method("name", [](const Pythia8::PVec* a) -> const std::string& { return a->name; });
    t.method("name", [](Pythia8::PVec* a) -> std::string& { return a->name; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:164:10
    // signature to use in the veto list: Pythia8::PVec::name
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding name! methods to provide write access to the field name (" __HERE__ ")");
    t.method("name!", [](Pythia8::PVec& a, const std::string& val) -> std::string& { return a.name = val; });

    DEBUG_MSG("Adding name! methods to provide write access to the field name (" __HERE__ ")");
    t.method("name!", [](Pythia8::PVec* a, const std::string& val) -> std::string& { return a->name = val; });

    DEBUG_MSG("Adding valNow methods  to provide read access to the field valNow (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:165:18
    // signature to use in the veto list: Pythia8::PVec::valNow
    t.method("valNow", [](const Pythia8::PVec& a) -> const std::vector<double>& { return a.valNow; });
    t.method("valNow", [](Pythia8::PVec& a) -> std::vector<double>& { return a.valNow; });
    t.method("valNow", [](const Pythia8::PVec* a) -> const std::vector<double>& { return a->valNow; });
    t.method("valNow", [](Pythia8::PVec* a) -> std::vector<double>& { return a->valNow; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:165:18
    // signature to use in the veto list: Pythia8::PVec::valNow
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valNow! methods to provide write access to the field valNow (" __HERE__ ")");
    t.method("valNow!", [](Pythia8::PVec& a, const std::vector<double>& val) -> std::vector<double>& { return a.valNow = val; });

    DEBUG_MSG("Adding valNow! methods to provide write access to the field valNow (" __HERE__ ")");
    t.method("valNow!", [](Pythia8::PVec* a, const std::vector<double>& val) -> std::vector<double>& { return a->valNow = val; });

    DEBUG_MSG("Adding valDefault methods  to provide read access to the field valDefault (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:165:26
    // signature to use in the veto list: Pythia8::PVec::valDefault
    t.method("valDefault", [](const Pythia8::PVec& a) -> const std::vector<double>& { return a.valDefault; });
    t.method("valDefault", [](Pythia8::PVec& a) -> std::vector<double>& { return a.valDefault; });
    t.method("valDefault", [](const Pythia8::PVec* a) -> const std::vector<double>& { return a->valDefault; });
    t.method("valDefault", [](Pythia8::PVec* a) -> std::vector<double>& { return a->valDefault; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:165:26
    // signature to use in the veto list: Pythia8::PVec::valDefault
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valDefault! methods to provide write access to the field valDefault (" __HERE__ ")");
    t.method("valDefault!", [](Pythia8::PVec& a, const std::vector<double>& val) -> std::vector<double>& { return a.valDefault = val; });

    DEBUG_MSG("Adding valDefault! methods to provide write access to the field valDefault (" __HERE__ ")");
    t.method("valDefault!", [](Pythia8::PVec* a, const std::vector<double>& val) -> std::vector<double>& { return a->valDefault = val; });

    DEBUG_MSG("Adding hasMin methods  to provide read access to the field hasMin (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:166:10
    // signature to use in the veto list: Pythia8::PVec::hasMin
    t.method("hasMin", [](const Pythia8::PVec& a) -> bool { return a.hasMin; });
    t.method("hasMin", [](Pythia8::PVec& a) -> bool { return a.hasMin; });
    t.method("hasMin", [](const Pythia8::PVec* a) -> bool { return a->hasMin; });
    t.method("hasMin", [](Pythia8::PVec* a) -> bool { return a->hasMin; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:166:10
    // signature to use in the veto list: Pythia8::PVec::hasMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hasMin! methods to provide write access to the field hasMin (" __HERE__ ")");
    t.method("hasMin!", [](Pythia8::PVec& a, bool val) -> bool { return a.hasMin = val; });

    DEBUG_MSG("Adding hasMin! methods to provide write access to the field hasMin (" __HERE__ ")");
    t.method("hasMin!", [](Pythia8::PVec* a, bool val) -> bool { return a->hasMin = val; });

    DEBUG_MSG("Adding hasMax methods  to provide read access to the field hasMax (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:166:18
    // signature to use in the veto list: Pythia8::PVec::hasMax
    t.method("hasMax", [](const Pythia8::PVec& a) -> bool { return a.hasMax; });
    t.method("hasMax", [](Pythia8::PVec& a) -> bool { return a.hasMax; });
    t.method("hasMax", [](const Pythia8::PVec* a) -> bool { return a->hasMax; });
    t.method("hasMax", [](Pythia8::PVec* a) -> bool { return a->hasMax; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:166:18
    // signature to use in the veto list: Pythia8::PVec::hasMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hasMax! methods to provide write access to the field hasMax (" __HERE__ ")");
    t.method("hasMax!", [](Pythia8::PVec& a, bool val) -> bool { return a.hasMax = val; });

    DEBUG_MSG("Adding hasMax! methods to provide write access to the field hasMax (" __HERE__ ")");
    t.method("hasMax!", [](Pythia8::PVec* a, bool val) -> bool { return a->hasMax = val; });

    DEBUG_MSG("Adding valMin methods  to provide read access to the field valMin (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:167:10
    // signature to use in the veto list: Pythia8::PVec::valMin
    t.method("valMin", [](const Pythia8::PVec& a) -> double { return a.valMin; });
    t.method("valMin", [](Pythia8::PVec& a) -> double { return a.valMin; });
    t.method("valMin", [](const Pythia8::PVec* a) -> double { return a->valMin; });
    t.method("valMin", [](Pythia8::PVec* a) -> double { return a->valMin; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:167:10
    // signature to use in the veto list: Pythia8::PVec::valMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valMin! methods to provide write access to the field valMin (" __HERE__ ")");
    t.method("valMin!", [](Pythia8::PVec& a, double val) -> double { return a.valMin = val; });

    DEBUG_MSG("Adding valMin! methods to provide write access to the field valMin (" __HERE__ ")");
    t.method("valMin!", [](Pythia8::PVec* a, double val) -> double { return a->valMin = val; });

    DEBUG_MSG("Adding valMax methods  to provide read access to the field valMax (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:167:18
    // signature to use in the veto list: Pythia8::PVec::valMax
    t.method("valMax", [](const Pythia8::PVec& a) -> double { return a.valMax; });
    t.method("valMax", [](Pythia8::PVec& a) -> double { return a.valMax; });
    t.method("valMax", [](const Pythia8::PVec* a) -> double { return a->valMax; });
    t.method("valMax", [](Pythia8::PVec* a) -> double { return a->valMax; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Settings.h:167:18
    // signature to use in the veto list: Pythia8::PVec::valMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding valMax! methods to provide write access to the field valMax (" __HERE__ ")");
    t.method("valMax!", [](Pythia8::PVec& a, double val) -> double { return a.valMax = val; });

    DEBUG_MSG("Adding valMax! methods to provide write access to the field valMax (" __HERE__ ")");
    t.method("valMax!", [](Pythia8::PVec* a, double val) -> double { return a->valMax = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PVec>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PVec(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PVec(module));
}
