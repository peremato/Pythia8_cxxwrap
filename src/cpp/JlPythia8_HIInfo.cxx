// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::HIInfo> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::HIInfo> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::HIInfo
// signature to use in the veto file: Pythia8::HIInfo
struct JlPythia8_HIInfo: public Wrapper {

  JlPythia8_HIInfo(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::HIInfo (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:27:7
    jlcxx::TypeWrapper<Pythia8::HIInfo>  t = jlModule.add_type<Pythia8::HIInfo>("Pythia8!HIInfo");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::HIInfo>>(new jlcxx::TypeWrapper<Pythia8::HIInfo>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::b() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::b()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:43:10
    t.method("b", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::b));

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::phi() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::phi()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:48:10
    t.method("phi", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::phi));

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::sigmaTot() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::sigmaTot()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:53:10
    t.method("sigmaTot", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::sigmaTot));

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::sigmaTotErr() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::sigmaTotErr()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:58:10
    t.method("sigmaTotErr", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::sigmaTotErr));

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::sigmaND() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::sigmaND()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:64:10
    t.method("sigmaND", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::sigmaND));

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::sigmaNDErr() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::sigmaNDErr()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:69:10
    t.method("sigmaNDErr", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::sigmaNDErr));

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::avNDb() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::avNDb()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:75:10
    t.method("avNDb", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::avNDb));

    DEBUG_MSG("Adding wrapper for long Pythia8::HIInfo::nAttempts() (" __HERE__ ")");
    // signature to use in the veto list: long Pythia8::HIInfo::nAttempts()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:80:8
    t.method("nAttempts", static_cast<long (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nAttempts));

    DEBUG_MSG("Adding wrapper for long Pythia8::HIInfo::nAccepted() (" __HERE__ ")");
    // signature to use in the veto list: long Pythia8::HIInfo::nAccepted()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:85:8
    t.method("nAccepted", static_cast<long (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nAccepted));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nCollTot() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nCollTot()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:90:7
    t.method("nCollTot", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nCollTot));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nCollND() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nCollND()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:94:7
    t.method("nCollND", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nCollND));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nCollNDTot() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nCollNDTot()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:97:7
    t.method("nCollNDTot", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nCollNDTot));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nCollSDP() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nCollSDP()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:101:7
    t.method("nCollSDP", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nCollSDP));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nCollSDT() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nCollSDT()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:105:7
    t.method("nCollSDT", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nCollSDT));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nCollDD() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nCollDD()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:109:7
    t.method("nCollDD", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nCollDD));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nCollCD() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nCollCD()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:113:7
    t.method("nCollCD", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nCollCD));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nCollEL() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nCollEL()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:116:7
    t.method("nCollEL", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nCollEL));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nPartProj() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nPartProj()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:119:7
    t.method("nPartProj", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nPartProj));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nAbsProj() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nAbsProj()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:123:7
    t.method("nAbsProj", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nAbsProj));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nDiffProj() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nDiffProj()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:127:7
    t.method("nDiffProj", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nDiffProj));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nElProj() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nElProj()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:131:7
    t.method("nElProj", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nElProj));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nPartTarg() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nPartTarg()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:135:7
    t.method("nPartTarg", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nPartTarg));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nAbsTarg() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nAbsTarg()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:139:7
    t.method("nAbsTarg", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nAbsTarg));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nDiffTarg() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nDiffTarg()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:143:7
    t.method("nDiffTarg", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nDiffTarg));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nElTarg() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nElTarg()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:147:7
    t.method("nElTarg", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nElTarg));

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::weight() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::weight()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:150:10
    t.method("weight", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::weight));

    DEBUG_MSG("Adding wrapper for double Pythia8::HIInfo::weightSum() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::HIInfo::weightSum()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:153:10
    t.method("weightSum", static_cast<double (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::weightSum));

    DEBUG_MSG("Adding wrapper for int Pythia8::HIInfo::nFail() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::HIInfo::nFail()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:156:7
    t.method("nFail", static_cast<int (Pythia8::HIInfo::*)()  const>(&Pythia8::HIInfo::nFail));

    DEBUG_MSG("Adding wrapper for void Pythia8::HIInfo::failedExcitation() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::HIInfo::failedExcitation()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:161:8
    t.method("failedExcitation", static_cast<void (Pythia8::HIInfo::*)() >(&Pythia8::HIInfo::failedExcitation));

    DEBUG_MSG("Adding wrapper for const Pythia8::SubCollisionSet * Pythia8::HIInfo::subCollisionsPtr() (" __HERE__ ")");
    // signature to use in the veto list: const Pythia8::SubCollisionSet * Pythia8::HIInfo::subCollisionsPtr()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/HIInfo.h:227:26
    t.method("subCollisionsPtr", static_cast<const Pythia8::SubCollisionSet * (Pythia8::HIInfo::*)() >(&Pythia8::HIInfo::subCollisionsPtr));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::HIInfo>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_HIInfo(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_HIInfo(module));
}
