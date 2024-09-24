// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::HardProcess> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::HardProcess> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::HardProcess
// signature to use in the veto file: Pythia8::HardProcess
struct JlPythia8_HardProcess: public Wrapper {

  JlPythia8_HardProcess(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::HardProcess (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:38:7
    jlcxx::TypeWrapper<Pythia8::HardProcess>  t = jlModule.add_type<Pythia8::HardProcess>("Pythia8!HardProcess");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::HardProcess>>(new jlcxx::TypeWrapper<Pythia8::HardProcess>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::HardProcess(const Pythia8::HardProcess &) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:69:3
    t.constructor<const Pythia8::HardProcess &>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::HardProcess(std::string, Pythia8::ParticleData *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:89:3
    t.constructor<std::string, Pythia8::ParticleData *>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::initOnProcess(std::string, Pythia8::ParticleData *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HardProcess::initOnProcess(std::string, Pythia8::ParticleData *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:97:16
    t.method("initOnProcess", static_cast<void (Pythia8::HardProcess::*)(std::string, Pythia8::ParticleData *) >(&Pythia8::HardProcess::initOnProcess));

    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::initOnLHEF(std::string, Pythia8::ParticleData *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HardProcess::initOnLHEF(std::string, Pythia8::ParticleData *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:100:8
    t.method("initOnLHEF", static_cast<void (Pythia8::HardProcess::*)(std::string, Pythia8::ParticleData *) >(&Pythia8::HardProcess::initOnLHEF));

    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::translateLHEFString(std::string) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HardProcess::translateLHEFString(std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:103:8
    t.method("translateLHEFString", static_cast<void (Pythia8::HardProcess::*)(std::string) >(&Pythia8::HardProcess::translateLHEFString));

    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::translateProcessString(std::string) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HardProcess::translateProcessString(std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:106:16
    t.method("translateProcessString", static_cast<void (Pythia8::HardProcess::*)(std::string) >(&Pythia8::HardProcess::translateProcessString));

    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::clear() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HardProcess::clear()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:109:8
    t.method("clear", static_cast<void (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::clear));

    DEBUG_MSG("Adding wrapper for bool Pythia8::HardProcess::allowCandidates(int, std::vector<int>, std::vector<int>, const Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::HardProcess::allowCandidates(int, std::vector<int>, std::vector<int>, const Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:113:16
    t.method("allowCandidates", static_cast<bool (Pythia8::HardProcess::*)(int, std::vector<int>, std::vector<int>, const Pythia8::Event &) >(&Pythia8::HardProcess::allowCandidates));

    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::storeCandidates(const Pythia8::Event &, std::string) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HardProcess::storeCandidates(const Pythia8::Event &, std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:116:16
    t.method("storeCandidates", static_cast<void (Pythia8::HardProcess::*)(const Pythia8::Event &, std::string) >(&Pythia8::HardProcess::storeCandidates));

    DEBUG_MSG("Adding wrapper for bool Pythia8::HardProcess::matchesAnyOutgoing(int, const Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::HardProcess::matchesAnyOutgoing(int, const Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:119:16
    t.method("matchesAnyOutgoing", static_cast<bool (Pythia8::HardProcess::*)(int, const Pythia8::Event &) >(&Pythia8::HardProcess::matchesAnyOutgoing));

    DEBUG_MSG("Adding wrapper for bool Pythia8::HardProcess::findOtherCandidates(int, const Pythia8::Event &, bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::HardProcess::findOtherCandidates(int, const Pythia8::Event &, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:123:16
    t.method("findOtherCandidates", static_cast<bool (Pythia8::HardProcess::*)(int, const Pythia8::Event &, bool) >(&Pythia8::HardProcess::findOtherCandidates));

    DEBUG_MSG("Adding wrapper for int Pythia8::HardProcess::nQuarksOut() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HardProcess::nQuarksOut()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:132:7
    t.method("nQuarksOut", static_cast<int (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::nQuarksOut));

    DEBUG_MSG("Adding wrapper for int Pythia8::HardProcess::nLeptonOut() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HardProcess::nLeptonOut()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:135:7
    t.method("nLeptonOut", static_cast<int (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::nLeptonOut));

    DEBUG_MSG("Adding wrapper for int Pythia8::HardProcess::nBosonsOut() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HardProcess::nBosonsOut()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:138:7
    t.method("nBosonsOut", static_cast<int (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::nBosonsOut));

    DEBUG_MSG("Adding wrapper for int Pythia8::HardProcess::nQuarksIn() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HardProcess::nQuarksIn()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:142:7
    t.method("nQuarksIn", static_cast<int (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::nQuarksIn));

    DEBUG_MSG("Adding wrapper for int Pythia8::HardProcess::nLeptonIn() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HardProcess::nLeptonIn()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:145:7
    t.method("nLeptonIn", static_cast<int (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::nLeptonIn));

    DEBUG_MSG("Adding wrapper for int Pythia8::HardProcess::hasResInCurrent() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HardProcess::hasResInCurrent()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:148:7
    t.method("hasResInCurrent", static_cast<int (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::hasResInCurrent));

    DEBUG_MSG("Adding wrapper for int Pythia8::HardProcess::nResInCurrent() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HardProcess::nResInCurrent()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:151:7
    t.method("nResInCurrent", static_cast<int (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::nResInCurrent));

    DEBUG_MSG("Adding wrapper for bool Pythia8::HardProcess::hasResInProc() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::HardProcess::hasResInProc()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:153:8
    t.method("hasResInProc", static_cast<bool (Pythia8::HardProcess::*)() >(&Pythia8::HardProcess::hasResInProc));

    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::list() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HardProcess::list()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:155:8
    t.method("list", static_cast<void (Pythia8::HardProcess::*)()  const>(&Pythia8::HardProcess::list));

    DEBUG_MSG("Adding wrapper for void Pythia8::HardProcess::listCandidates() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HardProcess::listCandidates()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:158:8
    t.method("listCandidates", static_cast<void (Pythia8::HardProcess::*)()  const>(&Pythia8::HardProcess::listCandidates));

    DEBUG_MSG("Adding hardIncoming1 methods  to provide read access to the field hardIncoming1 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:43:7
    // signature to use in the veto list: Pythia8::HardProcess::hardIncoming1
    t.method("hardIncoming1", [](const Pythia8::HardProcess& a) -> int { return a.hardIncoming1; });
    t.method("hardIncoming1", [](Pythia8::HardProcess& a) -> int { return a.hardIncoming1; });
    t.method("hardIncoming1", [](const Pythia8::HardProcess* a) -> int { return a->hardIncoming1; });
    t.method("hardIncoming1", [](Pythia8::HardProcess* a) -> int { return a->hardIncoming1; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:43:7
    // signature to use in the veto list: Pythia8::HardProcess::hardIncoming1
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hardIncoming1! methods to provide write access to the field hardIncoming1 (" __HERE__ ")");
    t.method("hardIncoming1!", [](Pythia8::HardProcess& a, int val) -> int { return a.hardIncoming1 = val; });

    DEBUG_MSG("Adding hardIncoming1! methods to provide write access to the field hardIncoming1 (" __HERE__ ")");
    t.method("hardIncoming1!", [](Pythia8::HardProcess* a, int val) -> int { return a->hardIncoming1 = val; });

    DEBUG_MSG("Adding hardIncoming2 methods  to provide read access to the field hardIncoming2 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:45:7
    // signature to use in the veto list: Pythia8::HardProcess::hardIncoming2
    t.method("hardIncoming2", [](const Pythia8::HardProcess& a) -> int { return a.hardIncoming2; });
    t.method("hardIncoming2", [](Pythia8::HardProcess& a) -> int { return a.hardIncoming2; });
    t.method("hardIncoming2", [](const Pythia8::HardProcess* a) -> int { return a->hardIncoming2; });
    t.method("hardIncoming2", [](Pythia8::HardProcess* a) -> int { return a->hardIncoming2; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:45:7
    // signature to use in the veto list: Pythia8::HardProcess::hardIncoming2
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hardIncoming2! methods to provide write access to the field hardIncoming2 (" __HERE__ ")");
    t.method("hardIncoming2!", [](Pythia8::HardProcess& a, int val) -> int { return a.hardIncoming2 = val; });

    DEBUG_MSG("Adding hardIncoming2! methods to provide write access to the field hardIncoming2 (" __HERE__ ")");
    t.method("hardIncoming2!", [](Pythia8::HardProcess* a, int val) -> int { return a->hardIncoming2 = val; });

    DEBUG_MSG("Adding hardOutgoing1 methods  to provide read access to the field hardOutgoing1 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:47:15
    // signature to use in the veto list: Pythia8::HardProcess::hardOutgoing1
    t.method("hardOutgoing1", [](const Pythia8::HardProcess& a) -> const std::vector<int>& { return a.hardOutgoing1; });
    t.method("hardOutgoing1", [](Pythia8::HardProcess& a) -> std::vector<int>& { return a.hardOutgoing1; });
    t.method("hardOutgoing1", [](const Pythia8::HardProcess* a) -> const std::vector<int>& { return a->hardOutgoing1; });
    t.method("hardOutgoing1", [](Pythia8::HardProcess* a) -> std::vector<int>& { return a->hardOutgoing1; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:47:15
    // signature to use in the veto list: Pythia8::HardProcess::hardOutgoing1
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hardOutgoing1! methods to provide write access to the field hardOutgoing1 (" __HERE__ ")");
    t.method("hardOutgoing1!", [](Pythia8::HardProcess& a, const std::vector<int>& val) -> std::vector<int>& { return a.hardOutgoing1 = val; });

    DEBUG_MSG("Adding hardOutgoing1! methods to provide write access to the field hardOutgoing1 (" __HERE__ ")");
    t.method("hardOutgoing1!", [](Pythia8::HardProcess* a, const std::vector<int>& val) -> std::vector<int>& { return a->hardOutgoing1 = val; });

    DEBUG_MSG("Adding hardOutgoing2 methods  to provide read access to the field hardOutgoing2 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:48:15
    // signature to use in the veto list: Pythia8::HardProcess::hardOutgoing2
    t.method("hardOutgoing2", [](const Pythia8::HardProcess& a) -> const std::vector<int>& { return a.hardOutgoing2; });
    t.method("hardOutgoing2", [](Pythia8::HardProcess& a) -> std::vector<int>& { return a.hardOutgoing2; });
    t.method("hardOutgoing2", [](const Pythia8::HardProcess* a) -> const std::vector<int>& { return a->hardOutgoing2; });
    t.method("hardOutgoing2", [](Pythia8::HardProcess* a) -> std::vector<int>& { return a->hardOutgoing2; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:48:15
    // signature to use in the veto list: Pythia8::HardProcess::hardOutgoing2
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hardOutgoing2! methods to provide write access to the field hardOutgoing2 (" __HERE__ ")");
    t.method("hardOutgoing2!", [](Pythia8::HardProcess& a, const std::vector<int>& val) -> std::vector<int>& { return a.hardOutgoing2 = val; });

    DEBUG_MSG("Adding hardOutgoing2! methods to provide write access to the field hardOutgoing2 (" __HERE__ ")");
    t.method("hardOutgoing2!", [](Pythia8::HardProcess* a, const std::vector<int>& val) -> std::vector<int>& { return a->hardOutgoing2 = val; });

    DEBUG_MSG("Adding hardIntermediate methods  to provide read access to the field hardIntermediate (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:50:15
    // signature to use in the veto list: Pythia8::HardProcess::hardIntermediate
    t.method("hardIntermediate", [](const Pythia8::HardProcess& a) -> const std::vector<int>& { return a.hardIntermediate; });
    t.method("hardIntermediate", [](Pythia8::HardProcess& a) -> std::vector<int>& { return a.hardIntermediate; });
    t.method("hardIntermediate", [](const Pythia8::HardProcess* a) -> const std::vector<int>& { return a->hardIntermediate; });
    t.method("hardIntermediate", [](Pythia8::HardProcess* a) -> std::vector<int>& { return a->hardIntermediate; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:50:15
    // signature to use in the veto list: Pythia8::HardProcess::hardIntermediate
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hardIntermediate! methods to provide write access to the field hardIntermediate (" __HERE__ ")");
    t.method("hardIntermediate!", [](Pythia8::HardProcess& a, const std::vector<int>& val) -> std::vector<int>& { return a.hardIntermediate = val; });

    DEBUG_MSG("Adding hardIntermediate! methods to provide write access to the field hardIntermediate (" __HERE__ ")");
    t.method("hardIntermediate!", [](Pythia8::HardProcess* a, const std::vector<int>& val) -> std::vector<int>& { return a->hardIntermediate = val; });

    DEBUG_MSG("Adding state methods  to provide read access to the field state (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:53:9
    // signature to use in the veto list: Pythia8::HardProcess::state
    t.method("state", [](const Pythia8::HardProcess& a) -> const Pythia8::Event& { return a.state; });
    t.method("state", [](Pythia8::HardProcess& a) -> Pythia8::Event& { return a.state; });
    t.method("state", [](const Pythia8::HardProcess* a) -> const Pythia8::Event& { return a->state; });
    t.method("state", [](Pythia8::HardProcess* a) -> Pythia8::Event& { return a->state; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:53:9
    // signature to use in the veto list: Pythia8::HardProcess::state
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding state! methods to provide write access to the field state (" __HERE__ ")");
    t.method("state!", [](Pythia8::HardProcess& a, const Pythia8::Event& val) -> Pythia8::Event& { return a.state = val; });

    DEBUG_MSG("Adding state! methods to provide write access to the field state (" __HERE__ ")");
    t.method("state!", [](Pythia8::HardProcess* a, const Pythia8::Event& val) -> Pythia8::Event& { return a->state = val; });

    DEBUG_MSG("Adding PosOutgoing1 methods  to provide read access to the field PosOutgoing1 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:55:15
    // signature to use in the veto list: Pythia8::HardProcess::PosOutgoing1
    t.method("PosOutgoing1", [](const Pythia8::HardProcess& a) -> const std::vector<int>& { return a.PosOutgoing1; });
    t.method("PosOutgoing1", [](Pythia8::HardProcess& a) -> std::vector<int>& { return a.PosOutgoing1; });
    t.method("PosOutgoing1", [](const Pythia8::HardProcess* a) -> const std::vector<int>& { return a->PosOutgoing1; });
    t.method("PosOutgoing1", [](Pythia8::HardProcess* a) -> std::vector<int>& { return a->PosOutgoing1; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:55:15
    // signature to use in the veto list: Pythia8::HardProcess::PosOutgoing1
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding PosOutgoing1! methods to provide write access to the field PosOutgoing1 (" __HERE__ ")");
    t.method("PosOutgoing1!", [](Pythia8::HardProcess& a, const std::vector<int>& val) -> std::vector<int>& { return a.PosOutgoing1 = val; });

    DEBUG_MSG("Adding PosOutgoing1! methods to provide write access to the field PosOutgoing1 (" __HERE__ ")");
    t.method("PosOutgoing1!", [](Pythia8::HardProcess* a, const std::vector<int>& val) -> std::vector<int>& { return a->PosOutgoing1 = val; });

    DEBUG_MSG("Adding PosOutgoing2 methods  to provide read access to the field PosOutgoing2 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:56:15
    // signature to use in the veto list: Pythia8::HardProcess::PosOutgoing2
    t.method("PosOutgoing2", [](const Pythia8::HardProcess& a) -> const std::vector<int>& { return a.PosOutgoing2; });
    t.method("PosOutgoing2", [](Pythia8::HardProcess& a) -> std::vector<int>& { return a.PosOutgoing2; });
    t.method("PosOutgoing2", [](const Pythia8::HardProcess* a) -> const std::vector<int>& { return a->PosOutgoing2; });
    t.method("PosOutgoing2", [](Pythia8::HardProcess* a) -> std::vector<int>& { return a->PosOutgoing2; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:56:15
    // signature to use in the veto list: Pythia8::HardProcess::PosOutgoing2
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding PosOutgoing2! methods to provide write access to the field PosOutgoing2 (" __HERE__ ")");
    t.method("PosOutgoing2!", [](Pythia8::HardProcess& a, const std::vector<int>& val) -> std::vector<int>& { return a.PosOutgoing2 = val; });

    DEBUG_MSG("Adding PosOutgoing2! methods to provide write access to the field PosOutgoing2 (" __HERE__ ")");
    t.method("PosOutgoing2!", [](Pythia8::HardProcess* a, const std::vector<int>& val) -> std::vector<int>& { return a->PosOutgoing2 = val; });

    DEBUG_MSG("Adding PosIntermediate methods  to provide read access to the field PosIntermediate (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:58:15
    // signature to use in the veto list: Pythia8::HardProcess::PosIntermediate
    t.method("PosIntermediate", [](const Pythia8::HardProcess& a) -> const std::vector<int>& { return a.PosIntermediate; });
    t.method("PosIntermediate", [](Pythia8::HardProcess& a) -> std::vector<int>& { return a.PosIntermediate; });
    t.method("PosIntermediate", [](const Pythia8::HardProcess* a) -> const std::vector<int>& { return a->PosIntermediate; });
    t.method("PosIntermediate", [](Pythia8::HardProcess* a) -> std::vector<int>& { return a->PosIntermediate; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:58:15
    // signature to use in the veto list: Pythia8::HardProcess::PosIntermediate
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding PosIntermediate! methods to provide write access to the field PosIntermediate (" __HERE__ ")");
    t.method("PosIntermediate!", [](Pythia8::HardProcess& a, const std::vector<int>& val) -> std::vector<int>& { return a.PosIntermediate = val; });

    DEBUG_MSG("Adding PosIntermediate! methods to provide write access to the field PosIntermediate (" __HERE__ ")");
    t.method("PosIntermediate!", [](Pythia8::HardProcess* a, const std::vector<int>& val) -> std::vector<int>& { return a->PosIntermediate = val; });

    DEBUG_MSG("Adding tms methods  to provide read access to the field tms (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:61:10
    // signature to use in the veto list: Pythia8::HardProcess::tms
    t.method("tms", [](const Pythia8::HardProcess& a) -> double { return a.tms; });
    t.method("tms", [](Pythia8::HardProcess& a) -> double { return a.tms; });
    t.method("tms", [](const Pythia8::HardProcess* a) -> double { return a->tms; });
    t.method("tms", [](Pythia8::HardProcess* a) -> double { return a->tms; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/MergingHooks.h:61:10
    // signature to use in the veto list: Pythia8::HardProcess::tms
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding tms! methods to provide write access to the field tms (" __HERE__ ")");
    t.method("tms!", [](Pythia8::HardProcess& a, double val) -> double { return a.tms = val; });

    DEBUG_MSG("Adding tms! methods to provide write access to the field tms (" __HERE__ ")");
    t.method("tms!", [](Pythia8::HardProcess* a, double val) -> double { return a->tms = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::HardProcess>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_HardProcess(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_HardProcess(module));
}