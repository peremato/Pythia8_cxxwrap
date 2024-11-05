// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::ResonanceWidths> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::ResonanceWidths> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::ResonanceWidths
// signature to use in the veto file: Pythia8::ResonanceWidths
struct JlPythia8_ResonanceWidths: public Wrapper {

  JlPythia8_ResonanceWidths(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::ResonanceWidths (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:34:7
    jlcxx::TypeWrapper<Pythia8::ResonanceWidths>  t = jlModule.add_type<Pythia8::ResonanceWidths>("Pythia8!ResonanceWidths");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ResonanceWidths>>(new jlcxx::TypeWrapper<Pythia8::ResonanceWidths>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;

    DEBUG_MSG("Adding wrapper for void Pythia8::ResonanceWidths::initBasic(int, bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::ResonanceWidths::initBasic(int, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:42:8
    t.method("initBasic", static_cast<void (Pythia8::ResonanceWidths::*)(int, bool) >(&Pythia8::ResonanceWidths::initBasic));
    t.method("initBasic", [](Pythia8::ResonanceWidths& a, int arg0)->void { a.initBasic(arg0); });
    t.method("initBasic", [](Pythia8::ResonanceWidths* a, int arg0)->void { a->initBasic(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::ResonanceWidths::init(Pythia8::Info *) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::ResonanceWidths::init(Pythia8::Info *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:46:16
    t.method("init", static_cast<bool (Pythia8::ResonanceWidths::*)(Pythia8::Info *) >(&Pythia8::ResonanceWidths::init));

    DEBUG_MSG("Adding wrapper for int Pythia8::ResonanceWidths::id() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::ResonanceWidths::id()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:49:7
    t.method("id", static_cast<int (Pythia8::ResonanceWidths::*)()  const>(&Pythia8::ResonanceWidths::id));

    DEBUG_MSG("Adding wrapper for double Pythia8::ResonanceWidths::width(int, double, int, bool, bool, int, int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::ResonanceWidths::width(int, double, int, bool, bool, int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:52:10
    t.method("width", static_cast<double (Pythia8::ResonanceWidths::*)(int, double, int, bool, bool, int, int) >(&Pythia8::ResonanceWidths::width));
    t.method("width", [](Pythia8::ResonanceWidths& a, int arg0, double arg1)->double { return a.width(arg0, arg1); });
    t.method("width", [](Pythia8::ResonanceWidths& a, int arg0, double arg1, int arg2)->double { return a.width(arg0, arg1, arg2); });
    t.method("width", [](Pythia8::ResonanceWidths& a, int arg0, double arg1, int arg2, bool arg3)->double { return a.width(arg0, arg1, arg2, arg3); });
    t.method("width", [](Pythia8::ResonanceWidths& a, int arg0, double arg1, int arg2, bool arg3, bool arg4)->double { return a.width(arg0, arg1, arg2, arg3, arg4); });
    t.method("width", [](Pythia8::ResonanceWidths& a, int arg0, double arg1, int arg2, bool arg3, bool arg4, int arg5)->double { return a.width(arg0, arg1, arg2, arg3, arg4, arg5); });
    t.method("width", [](Pythia8::ResonanceWidths* a, int arg0, double arg1)->double { return a->width(arg0, arg1); });
    t.method("width", [](Pythia8::ResonanceWidths* a, int arg0, double arg1, int arg2)->double { return a->width(arg0, arg1, arg2); });
    t.method("width", [](Pythia8::ResonanceWidths* a, int arg0, double arg1, int arg2, bool arg3)->double { return a->width(arg0, arg1, arg2, arg3); });
    t.method("width", [](Pythia8::ResonanceWidths* a, int arg0, double arg1, int arg2, bool arg3, bool arg4)->double { return a->width(arg0, arg1, arg2, arg3, arg4); });
    t.method("width", [](Pythia8::ResonanceWidths* a, int arg0, double arg1, int arg2, bool arg3, bool arg4, int arg5)->double { return a->width(arg0, arg1, arg2, arg3, arg4, arg5); });

    DEBUG_MSG("Adding wrapper for double Pythia8::ResonanceWidths::widthOpen(int, double, int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::ResonanceWidths::widthOpen(int, double, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:57:10
    t.method("widthOpen", static_cast<double (Pythia8::ResonanceWidths::*)(int, double, int) >(&Pythia8::ResonanceWidths::widthOpen));
    t.method("widthOpen", [](Pythia8::ResonanceWidths& a, int arg0, double arg1)->double { return a.widthOpen(arg0, arg1); });
    t.method("widthOpen", [](Pythia8::ResonanceWidths* a, int arg0, double arg1)->double { return a->widthOpen(arg0, arg1); });

    DEBUG_MSG("Adding wrapper for double Pythia8::ResonanceWidths::widthStore(int, double, int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::ResonanceWidths::widthStore(int, double, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:61:10
    t.method("widthStore", static_cast<double (Pythia8::ResonanceWidths::*)(int, double, int) >(&Pythia8::ResonanceWidths::widthStore));
    t.method("widthStore", [](Pythia8::ResonanceWidths& a, int arg0, double arg1)->double { return a.widthStore(arg0, arg1); });
    t.method("widthStore", [](Pythia8::ResonanceWidths* a, int arg0, double arg1)->double { return a->widthStore(arg0, arg1); });

    DEBUG_MSG("Adding wrapper for double Pythia8::ResonanceWidths::openFrac(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::ResonanceWidths::openFrac(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:65:10
    t.method("openFrac", static_cast<double (Pythia8::ResonanceWidths::*)(int) >(&Pythia8::ResonanceWidths::openFrac));

    DEBUG_MSG("Adding wrapper for double Pythia8::ResonanceWidths::widthRescaleFactor() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::ResonanceWidths::widthRescaleFactor()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:68:10
    t.method("widthRescaleFactor", static_cast<double (Pythia8::ResonanceWidths::*)() >(&Pythia8::ResonanceWidths::widthRescaleFactor));

    DEBUG_MSG("Adding wrapper for double Pythia8::ResonanceWidths::widthChan(double, int, int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::ResonanceWidths::widthChan(double, int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:72:10
    t.method("widthChan", static_cast<double (Pythia8::ResonanceWidths::*)(double, int, int) >(&Pythia8::ResonanceWidths::widthChan));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ResonanceWidths>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_ResonanceWidths(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_ResonanceWidths(module));
}
