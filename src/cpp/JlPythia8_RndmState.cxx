// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::RndmState> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::RndmState> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::RndmState
// signature to use in the veto file: Pythia8::RndmState
struct JlPythia8_RndmState: public Wrapper {

  JlPythia8_RndmState(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::RndmState (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:371:8
    jlcxx::TypeWrapper<Pythia8::RndmState>  t = jlModule.add_type<Pythia8::RndmState>("Pythia8!RndmState");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::RndmState>>(new jlcxx::TypeWrapper<Pythia8::RndmState>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
    module_.set_override_module(jl_base_module);

    DEBUG_MSG("Adding wrapper for bool Pythia8::RndmState::operator==(const Pythia8::RndmState &) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::RndmState::operator==(const Pythia8::RndmState &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:377:8
    t.method("==", static_cast<bool (Pythia8::RndmState::*)(const Pythia8::RndmState &)  const>(&Pythia8::RndmState::operator==));

    module_.unset_override_module();

    DEBUG_MSG("Adding i97 methods  to provide read access to the field i97 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:372:10
    // signature to use in the veto list: Pythia8::RndmState::i97
    t.method("i97", [](const Pythia8::RndmState& a) -> int { return a.i97; });
    t.method("i97", [](Pythia8::RndmState& a) -> int { return a.i97; });
    t.method("i97", [](const Pythia8::RndmState* a) -> int { return a->i97; });
    t.method("i97", [](Pythia8::RndmState* a) -> int { return a->i97; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:372:10
    // signature to use in the veto list: Pythia8::RndmState::i97
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding i97! methods to provide write access to the field i97 (" __HERE__ ")");
    t.method("i97!", [](Pythia8::RndmState& a, int val) -> int { return a.i97 = val; });

    DEBUG_MSG("Adding i97! methods to provide write access to the field i97 (" __HERE__ ")");
    t.method("i97!", [](Pythia8::RndmState* a, int val) -> int { return a->i97 = val; });

    DEBUG_MSG("Adding j97 methods  to provide read access to the field j97 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:372:17
    // signature to use in the veto list: Pythia8::RndmState::j97
    t.method("j97", [](const Pythia8::RndmState& a) -> int { return a.j97; });
    t.method("j97", [](Pythia8::RndmState& a) -> int { return a.j97; });
    t.method("j97", [](const Pythia8::RndmState* a) -> int { return a->j97; });
    t.method("j97", [](Pythia8::RndmState* a) -> int { return a->j97; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:372:17
    // signature to use in the veto list: Pythia8::RndmState::j97
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding j97! methods to provide write access to the field j97 (" __HERE__ ")");
    t.method("j97!", [](Pythia8::RndmState& a, int val) -> int { return a.j97 = val; });

    DEBUG_MSG("Adding j97! methods to provide write access to the field j97 (" __HERE__ ")");
    t.method("j97!", [](Pythia8::RndmState* a, int val) -> int { return a->j97 = val; });

    DEBUG_MSG("Adding seed methods  to provide read access to the field seed (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:372:24
    // signature to use in the veto list: Pythia8::RndmState::seed
    t.method("seed", [](const Pythia8::RndmState& a) -> int { return a.seed; });
    t.method("seed", [](Pythia8::RndmState& a) -> int { return a.seed; });
    t.method("seed", [](const Pythia8::RndmState* a) -> int { return a->seed; });
    t.method("seed", [](Pythia8::RndmState* a) -> int { return a->seed; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:372:24
    // signature to use in the veto list: Pythia8::RndmState::seed
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding seed! methods to provide write access to the field seed (" __HERE__ ")");
    t.method("seed!", [](Pythia8::RndmState& a, int val) -> int { return a.seed = val; });

    DEBUG_MSG("Adding seed! methods to provide write access to the field seed (" __HERE__ ")");
    t.method("seed!", [](Pythia8::RndmState* a, int val) -> int { return a->seed = val; });

    DEBUG_MSG("Adding sequence methods  to provide read access to the field sequence (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:373:10
    // signature to use in the veto list: Pythia8::RndmState::sequence
    t.method("sequence", [](const Pythia8::RndmState& a) -> long { return a.sequence; });
    t.method("sequence", [](Pythia8::RndmState& a) -> long { return a.sequence; });
    t.method("sequence", [](const Pythia8::RndmState* a) -> long { return a->sequence; });
    t.method("sequence", [](Pythia8::RndmState* a) -> long { return a->sequence; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:373:10
    // signature to use in the veto list: Pythia8::RndmState::sequence
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding sequence! methods to provide write access to the field sequence (" __HERE__ ")");
    t.method("sequence!", [](Pythia8::RndmState& a, long val) -> long { return a.sequence = val; });

    DEBUG_MSG("Adding sequence! methods to provide write access to the field sequence (" __HERE__ ")");
    t.method("sequence!", [](Pythia8::RndmState* a, long val) -> long { return a->sequence = val; });

    DEBUG_MSG("Adding c methods  to provide read access to the field c (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:374:19
    // signature to use in the veto list: Pythia8::RndmState::c
    t.method("c", [](const Pythia8::RndmState& a) -> double { return a.c; });
    t.method("c", [](Pythia8::RndmState& a) -> double { return a.c; });
    t.method("c", [](const Pythia8::RndmState* a) -> double { return a->c; });
    t.method("c", [](Pythia8::RndmState* a) -> double { return a->c; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:374:19
    // signature to use in the veto list: Pythia8::RndmState::c
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding c! methods to provide write access to the field c (" __HERE__ ")");
    t.method("c!", [](Pythia8::RndmState& a, double val) -> double { return a.c = val; });

    DEBUG_MSG("Adding c! methods to provide write access to the field c (" __HERE__ ")");
    t.method("c!", [](Pythia8::RndmState* a, double val) -> double { return a->c = val; });

    DEBUG_MSG("Adding cd methods  to provide read access to the field cd (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:374:24
    // signature to use in the veto list: Pythia8::RndmState::cd
    t.method("cd", [](const Pythia8::RndmState& a) -> double { return a.cd; });
    t.method("cd", [](Pythia8::RndmState& a) -> double { return a.cd; });
    t.method("cd", [](const Pythia8::RndmState* a) -> double { return a->cd; });
    t.method("cd", [](Pythia8::RndmState* a) -> double { return a->cd; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:374:24
    // signature to use in the veto list: Pythia8::RndmState::cd
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding cd! methods to provide write access to the field cd (" __HERE__ ")");
    t.method("cd!", [](Pythia8::RndmState& a, double val) -> double { return a.cd = val; });

    DEBUG_MSG("Adding cd! methods to provide write access to the field cd (" __HERE__ ")");
    t.method("cd!", [](Pythia8::RndmState* a, double val) -> double { return a->cd = val; });

    DEBUG_MSG("Adding cm methods  to provide read access to the field cm (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:374:30
    // signature to use in the veto list: Pythia8::RndmState::cm
    t.method("cm", [](const Pythia8::RndmState& a) -> double { return a.cm; });
    t.method("cm", [](Pythia8::RndmState& a) -> double { return a.cm; });
    t.method("cm", [](const Pythia8::RndmState* a) -> double { return a->cm; });
    t.method("cm", [](Pythia8::RndmState* a) -> double { return a->cm; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:374:30
    // signature to use in the veto list: Pythia8::RndmState::cm
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding cm! methods to provide write access to the field cm (" __HERE__ ")");
    t.method("cm!", [](Pythia8::RndmState& a, double val) -> double { return a.cm = val; });

    DEBUG_MSG("Adding cm! methods to provide write access to the field cm (" __HERE__ ")");
    t.method("cm!", [](Pythia8::RndmState* a, double val) -> double { return a->cm = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::RndmState>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_RndmState(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_RndmState(module));
}
