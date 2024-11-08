// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PhaseSpace> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PhaseSpace> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::PhaseSpace
// signature to use in the veto file: Pythia8::PhaseSpace
struct JlPythia8_PhaseSpace: public Wrapper {

  JlPythia8_PhaseSpace(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PhaseSpace (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:42:7
    jlcxx::TypeWrapper<Pythia8::PhaseSpace>  t = jlModule.add_type<Pythia8::PhaseSpace>("Pythia8!PhaseSpace");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpace>>(new jlcxx::TypeWrapper<Pythia8::PhaseSpace>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::init(bool, Pythia8::SigmaProcessPtr) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::init(bool, Pythia8::SigmaProcessPtr)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:50:8
    t.method("init", static_cast<void (Pythia8::PhaseSpace::*)(bool, Pythia8::SigmaProcessPtr) >(&Pythia8::PhaseSpace::init));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::updateBeamIDs() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::updateBeamIDs()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:53:8
    t.method("updateBeamIDs", static_cast<void (Pythia8::PhaseSpace::*)() >(&Pythia8::PhaseSpace::updateBeamIDs));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::newECM(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::newECM(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:58:8
    t.method("newECM", static_cast<void (Pythia8::PhaseSpace::*)(double) >(&Pythia8::PhaseSpace::newECM));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::setLHAPtr(Pythia8::LHAupPtr) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::setLHAPtr(Pythia8::LHAupPtr)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:61:8
    t.method("setLHAPtr", static_cast<void (Pythia8::PhaseSpace::*)(Pythia8::LHAupPtr) >(&Pythia8::PhaseSpace::setLHAPtr));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace::setupSampling() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace::setupSampling()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:65:16
    t.method("setupSampling", static_cast<bool (Pythia8::PhaseSpace::*)() >(&Pythia8::PhaseSpace::setupSampling));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace::trialKin(bool, bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace::trialKin(bool, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:69:16
    t.method("trialKin", static_cast<bool (Pythia8::PhaseSpace::*)(bool, bool) >(&Pythia8::PhaseSpace::trialKin));
    t.method("trialKin", [](Pythia8::PhaseSpace& a)->bool { return a.trialKin(); });
    t.method("trialKin", [](Pythia8::PhaseSpace& a, bool arg0)->bool { return a.trialKin(arg0); });
    t.method("trialKin", [](Pythia8::PhaseSpace* a)->bool { return a->trialKin(); });
    t.method("trialKin", [](Pythia8::PhaseSpace* a, bool arg0)->bool { return a->trialKin(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace::finalKin() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace::finalKin()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:73:16
    t.method("finalKin", static_cast<bool (Pythia8::PhaseSpace::*)() >(&Pythia8::PhaseSpace::finalKin));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::decayKinematics(Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::decayKinematics(Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:76:10
    t.method("decayKinematics", static_cast<void (Pythia8::PhaseSpace::*)(Pythia8::Event &) >(&Pythia8::PhaseSpace::decayKinematics));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::sigmaNow() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::sigmaNow()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:79:10
    t.method("sigmaNow", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::sigmaNow));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::sigmaMax() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::sigmaMax()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:80:10
    t.method("sigmaMax", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::sigmaMax));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::biasSelectionWeight() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::biasSelectionWeight()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:81:10
    t.method("biasSelectionWeight", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::biasSelectionWeight));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace::newSigmaMax() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace::newSigmaMax()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:82:10
    t.method("newSigmaMax", static_cast<bool (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::newSigmaMax));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::setSigmaMax(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::setSigmaMax(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:83:10
    t.method("setSigmaMax", static_cast<void (Pythia8::PhaseSpace::*)(double) >(&Pythia8::PhaseSpace::setSigmaMax));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::sigmaMaxSwitch() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::sigmaMaxSwitch()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:86:10
    t.method("sigmaMaxSwitch", static_cast<double (Pythia8::PhaseSpace::*)() >(&Pythia8::PhaseSpace::sigmaMaxSwitch));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::sigmaSumSigned() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::sigmaSumSigned()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:90:18
    t.method("sigmaSumSigned", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::sigmaSumSigned));

    DEBUG_MSG("Adding wrapper for Pythia8::Vec4 Pythia8::PhaseSpace::p(int) (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::Vec4 Pythia8::PhaseSpace::p(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:93:10
    t.method("p", static_cast<Pythia8::Vec4 (Pythia8::PhaseSpace::*)(int)  const>(&Pythia8::PhaseSpace::p));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::m(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::m(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:94:10
    t.method("m", static_cast<double (Pythia8::PhaseSpace::*)(int)  const>(&Pythia8::PhaseSpace::m));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::setP(int, Pythia8::Vec4) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::setP(int, Pythia8::Vec4)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:97:10
    t.method("setP", static_cast<void (Pythia8::PhaseSpace::*)(int, Pythia8::Vec4) >(&Pythia8::PhaseSpace::setP));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::ecm() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::ecm()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:100:10
    t.method("ecm", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::ecm));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::x1() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::x1()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:101:10
    t.method("x1", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::x1));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::x2() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::x2()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:102:10
    t.method("x2", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::x2));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::sHat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::sHat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:103:10
    t.method("sHat", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::sHat));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::tHat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::tHat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:104:10
    t.method("tHat", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::tHat));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::uHat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::uHat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:105:10
    t.method("uHat", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::uHat));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::pTHat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::pTHat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:106:10
    t.method("pTHat", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::pTHat));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::thetaHat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::thetaHat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:107:10
    t.method("thetaHat", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::thetaHat));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::phiHat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::phiHat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:108:10
    t.method("phiHat", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::phiHat));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::runBW3() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::runBW3()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:109:10
    t.method("runBW3", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::runBW3));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::runBW4() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::runBW4()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:110:10
    t.method("runBW4", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::runBW4));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::runBW5() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::runBW5()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:111:10
    t.method("runBW5", static_cast<double (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::runBW5));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace::isResolved() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace::isResolved()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:114:16
    t.method("isResolved", static_cast<bool (Pythia8::PhaseSpace::*)()  const>(&Pythia8::PhaseSpace::isResolved));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::rescaleSigma(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::rescaleSigma(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:118:16
    t.method("rescaleSigma", static_cast<void (Pythia8::PhaseSpace::*)(double) >(&Pythia8::PhaseSpace::rescaleSigma));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::rescaleMomenta(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::rescaleMomenta(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:119:16
    t.method("rescaleMomenta", static_cast<void (Pythia8::PhaseSpace::*)(double) >(&Pythia8::PhaseSpace::rescaleMomenta));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace::weightGammaPDFApprox() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace::weightGammaPDFApprox()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:122:18
    t.method("weightGammaPDFApprox", static_cast<double (Pythia8::PhaseSpace::*)() >(&Pythia8::PhaseSpace::weightGammaPDFApprox));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace::setGammaKinPtr(Pythia8::GammaKinematics *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace::setGammaKinPtr(Pythia8::GammaKinematics *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:125:16
    t.method("setGammaKinPtr", static_cast<void (Pythia8::PhaseSpace::*)(Pythia8::GammaKinematics *) >(&Pythia8::PhaseSpace::setGammaKinPtr));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpace>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PhaseSpace(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PhaseSpace(module));
}
