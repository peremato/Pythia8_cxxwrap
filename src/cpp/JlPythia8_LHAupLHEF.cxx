// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::LHAupLHEF> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::LHAupLHEF> : std::false_type { };
template<> struct SuperType<Pythia8::LHAupLHEF> { typedef Pythia8::LHAup type; };
}

// Class generating the wrapper for type Pythia8::LHAupLHEF
// signature to use in the veto file: Pythia8::LHAupLHEF
struct JlPythia8_LHAupLHEF: public Wrapper {

  JlPythia8_LHAupLHEF(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::LHAupLHEF (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:346:7
    jlcxx::TypeWrapper<Pythia8::LHAupLHEF>  t = jlModule.add_type<Pythia8::LHAupLHEF>("Pythia8!LHAupLHEF",
      jlcxx::julia_base_type<Pythia8::LHAup>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::LHAupLHEF>>(new jlcxx::TypeWrapper<Pythia8::LHAupLHEF>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::LHAupLHEF::LHAupLHEF(Pythia8::Info *, const char *, const char *, bool, bool) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:359:3
    t.constructor<Pythia8::Info *, const char *>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<Pythia8::Info *, const char *, const char *>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<Pythia8::Info *, const char *, const char *, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<Pythia8::Info *, const char *, const char *, bool, bool>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for void Pythia8::LHAupLHEF::closeAllFiles() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::LHAupLHEF::closeAllFiles()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:381:8
    t.method("closeAllFiles", static_cast<void (Pythia8::LHAupLHEF::*)() >(&Pythia8::LHAupLHEF::closeAllFiles));

    DEBUG_MSG("Adding wrapper for void Pythia8::LHAupLHEF::newEventFile(const char *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::LHAupLHEF::newEventFile(const char *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:394:8
    t.method("newEventFile", static_cast<void (Pythia8::LHAupLHEF::*)(const char *) >(&Pythia8::LHAupLHEF::newEventFile));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAupLHEF::fileFound() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAupLHEF::fileFound()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:408:8
    t.method("fileFound", static_cast<bool (Pythia8::LHAupLHEF::*)() >(&Pythia8::LHAupLHEF::fileFound));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAupLHEF::useExternal() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAupLHEF::useExternal()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:409:8
    t.method("useExternal", static_cast<bool (Pythia8::LHAupLHEF::*)() >(&Pythia8::LHAupLHEF::useExternal));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAupLHEF::setInit() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAupLHEF::setInit()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:412:8
    t.method("setInit", static_cast<bool (Pythia8::LHAupLHEF::*)() >(&Pythia8::LHAupLHEF::setInit));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAupLHEF::setEvent(int) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAupLHEF::setEvent(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:420:8
    t.method("setEvent", static_cast<bool (Pythia8::LHAupLHEF::*)(int) >(&Pythia8::LHAupLHEF::setEvent));
    t.method("setEvent", [](Pythia8::LHAupLHEF& a)->bool { return a.setEvent(); });
    t.method("setEvent", [](Pythia8::LHAupLHEF* a)->bool { return a->setEvent(); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAupLHEF::skipEvent(int) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAupLHEF::skipEvent(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:426:8
    t.method("skipEvent", static_cast<bool (Pythia8::LHAupLHEF::*)(int) >(&Pythia8::LHAupLHEF::skipEvent));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAupLHEF::setNewEventLHEF() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAupLHEF::setNewEventLHEF()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:433:8
    t.method("setNewEventLHEF", static_cast<bool (Pythia8::LHAupLHEF::*)() >(&Pythia8::LHAupLHEF::setNewEventLHEF));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAupLHEF::updateSigma() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAupLHEF::updateSigma()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:436:8
    t.method("updateSigma", static_cast<bool (Pythia8::LHAupLHEF::*)() >(&Pythia8::LHAupLHEF::updateSigma));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::LHAupLHEF>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_LHAupLHEF(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_LHAupLHEF(module));
}
