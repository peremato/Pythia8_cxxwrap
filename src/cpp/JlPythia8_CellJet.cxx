// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::CellJet> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::CellJet> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::CellJet
// signature to use in the veto file: Pythia8::CellJet
struct JlPythia8_CellJet: public Wrapper {

  JlPythia8_CellJet(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::CellJet (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:307:7
    jlcxx::TypeWrapper<Pythia8::CellJet>  t = jlModule.add_type<Pythia8::CellJet>("Pythia8!CellJet");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::CellJet>>(new jlcxx::TypeWrapper<Pythia8::CellJet>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::CellJet::CellJet(double, int, int, int, int, double, double, double, Pythia8::Rndm *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:312:3
    t.constructor<double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<double, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<double, int, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<double, int, int, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<double, int, int, int, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<double, int, int, int, int, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<double, int, int, int, int, double, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<double, int, int, int, int, double, double, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<double, int, int, int, int, double, double, double, Pythia8::Rndm *>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for bool Pythia8::CellJet::analyze(const Pythia8::Event &, double, double, double) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::CellJet::analyze(const Pythia8::Event &, double, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:321:8
    t.method("analyze", static_cast<bool (Pythia8::CellJet::*)(const Pythia8::Event &, double, double, double) >(&Pythia8::CellJet::analyze));
    t.method("analyze", [](Pythia8::CellJet& a, const Pythia8::Event & arg0)->bool { return a.analyze(arg0); });
    t.method("analyze", [](Pythia8::CellJet& a, const Pythia8::Event & arg0, double arg1)->bool { return a.analyze(arg0, arg1); });
    t.method("analyze", [](Pythia8::CellJet& a, const Pythia8::Event & arg0, double arg1, double arg2)->bool { return a.analyze(arg0, arg1, arg2); });
    t.method("analyze", [](Pythia8::CellJet* a, const Pythia8::Event & arg0)->bool { return a->analyze(arg0); });
    t.method("analyze", [](Pythia8::CellJet* a, const Pythia8::Event & arg0, double arg1)->bool { return a->analyze(arg0, arg1); });
    t.method("analyze", [](Pythia8::CellJet* a, const Pythia8::Event & arg0, double arg1, double arg2)->bool { return a->analyze(arg0, arg1, arg2); });

    DEBUG_MSG("Adding wrapper for int Pythia8::CellJet::size() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::CellJet::size()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:325:10
    t.method("size", static_cast<int (Pythia8::CellJet::*)()  const>(&Pythia8::CellJet::size));

    DEBUG_MSG("Adding wrapper for double Pythia8::CellJet::eT(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::CellJet::eT(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:326:10
    t.method("eT", static_cast<double (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::eT));

    DEBUG_MSG("Adding wrapper for double Pythia8::CellJet::etaCenter(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::CellJet::etaCenter(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:327:10
    t.method("etaCenter", static_cast<double (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::etaCenter));

    DEBUG_MSG("Adding wrapper for double Pythia8::CellJet::phiCenter(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::CellJet::phiCenter(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:328:10
    t.method("phiCenter", static_cast<double (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::phiCenter));

    DEBUG_MSG("Adding wrapper for double Pythia8::CellJet::etaWeighted(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::CellJet::etaWeighted(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:329:10
    t.method("etaWeighted", static_cast<double (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::etaWeighted));

    DEBUG_MSG("Adding wrapper for double Pythia8::CellJet::phiWeighted(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::CellJet::phiWeighted(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:330:10
    t.method("phiWeighted", static_cast<double (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::phiWeighted));

    DEBUG_MSG("Adding wrapper for int Pythia8::CellJet::multiplicity(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::CellJet::multiplicity(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:331:10
    t.method("multiplicity", static_cast<int (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::multiplicity));

    DEBUG_MSG("Adding wrapper for Pythia8::Vec4 Pythia8::CellJet::pMassless(int) (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::Vec4 Pythia8::CellJet::pMassless(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:332:10
    t.method("pMassless", static_cast<Pythia8::Vec4 (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::pMassless));

    DEBUG_MSG("Adding wrapper for Pythia8::Vec4 Pythia8::CellJet::pMassive(int) (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::Vec4 Pythia8::CellJet::pMassive(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:335:10
    t.method("pMassive", static_cast<Pythia8::Vec4 (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::pMassive));

    DEBUG_MSG("Adding wrapper for double Pythia8::CellJet::m(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::CellJet::m(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:336:10
    t.method("m", static_cast<double (Pythia8::CellJet::*)(int)  const>(&Pythia8::CellJet::m));

    DEBUG_MSG("Adding wrapper for void Pythia8::CellJet::list() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::CellJet::list()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:339:8
    t.method("list", static_cast<void (Pythia8::CellJet::*)()  const>(&Pythia8::CellJet::list));

    DEBUG_MSG("Adding wrapper for int Pythia8::CellJet::nError() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::CellJet::nError()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:342:7
    t.method("nError", static_cast<int (Pythia8::CellJet::*)()  const>(&Pythia8::CellJet::nError));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::CellJet>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_CellJet(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_CellJet(module));
}
