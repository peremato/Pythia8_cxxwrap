// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Junction> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Junction> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::Junction
// signature to use in the veto file: Pythia8::Junction
struct JlPythia8_Junction: public Wrapper {

  JlPythia8_Junction(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Junction (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:338:7
    jlcxx::TypeWrapper<Pythia8::Junction>  t = jlModule.add_type<Pythia8::Junction>("Pythia8!Junction");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Junction>>(new jlcxx::TypeWrapper<Pythia8::Junction>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::Junction::Junction(int, int, int, int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:346:3
    t.constructor<int, int, int, int>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::Junction::Junction(const Pythia8::Junction &) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:352:3
    t.constructor<const Pythia8::Junction &>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for Pythia8::Junction & Pythia8::Junction::operator=(const Pythia8::Junction &) (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::Junction & Pythia8::Junction::operator=(const Pythia8::Junction &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:357:13
    t.method("assign", static_cast<Pythia8::Junction & (Pythia8::Junction::*)(const Pythia8::Junction &) >(&Pythia8::Junction::operator=));

    DEBUG_MSG("Adding wrapper for void Pythia8::Junction::remains(bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Junction::remains(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:364:8
    t.method("remains", static_cast<void (Pythia8::Junction::*)(bool) >(&Pythia8::Junction::remains));

    DEBUG_MSG("Adding wrapper for void Pythia8::Junction::col(int, int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Junction::col(int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:365:8
    t.method("col", static_cast<void (Pythia8::Junction::*)(int, int) >(&Pythia8::Junction::col));

    DEBUG_MSG("Adding wrapper for void Pythia8::Junction::cols(int, int, int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Junction::cols(int, int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:366:8
    t.method("cols", static_cast<void (Pythia8::Junction::*)(int, int, int) >(&Pythia8::Junction::cols));

    DEBUG_MSG("Adding wrapper for void Pythia8::Junction::endCol(int, int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Junction::endCol(int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:368:8
    t.method("endCol", static_cast<void (Pythia8::Junction::*)(int, int) >(&Pythia8::Junction::endCol));

    DEBUG_MSG("Adding wrapper for void Pythia8::Junction::status(int, int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Junction::status(int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:369:8
    t.method("status", static_cast<void (Pythia8::Junction::*)(int, int) >(&Pythia8::Junction::status));

    DEBUG_MSG("Adding wrapper for bool Pythia8::Junction::remains() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::Junction::remains()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:372:10
    t.method("remains", static_cast<bool (Pythia8::Junction::*)()  const>(&Pythia8::Junction::remains));

    DEBUG_MSG("Adding wrapper for int Pythia8::Junction::kind() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::Junction::kind()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:373:10
    t.method("kind", static_cast<int (Pythia8::Junction::*)()  const>(&Pythia8::Junction::kind));

    DEBUG_MSG("Adding wrapper for int Pythia8::Junction::col(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::Junction::col(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:374:10
    t.method("col", static_cast<int (Pythia8::Junction::*)(int)  const>(&Pythia8::Junction::col));

    DEBUG_MSG("Adding wrapper for int Pythia8::Junction::endCol(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::Junction::endCol(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:375:10
    t.method("endCol", static_cast<int (Pythia8::Junction::*)(int)  const>(&Pythia8::Junction::endCol));

    DEBUG_MSG("Adding wrapper for int Pythia8::Junction::status(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::Junction::status(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Event.h:376:10
    t.method("status", static_cast<int (Pythia8::Junction::*)(int)  const>(&Pythia8::Junction::status));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Junction>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Junction(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Junction(module));
}
