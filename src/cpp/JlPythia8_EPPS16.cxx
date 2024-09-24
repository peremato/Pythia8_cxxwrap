// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::EPPS16> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::EPPS16> : std::false_type { };
template<> struct SuperType<Pythia8::EPPS16> { typedef Pythia8::nPDF type; };
}

// Class generating the wrapper for type Pythia8::EPPS16
// signature to use in the veto file: Pythia8::EPPS16
struct JlPythia8_EPPS16: public Wrapper {

  JlPythia8_EPPS16(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::EPPS16 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1170:7
    jlcxx::TypeWrapper<Pythia8::EPPS16>  t = jlModule.add_type<Pythia8::EPPS16>("Pythia8!EPPS16",
      jlcxx::julia_base_type<Pythia8::nPDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::EPPS16>>(new jlcxx::TypeWrapper<Pythia8::EPPS16>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::EPPS16::EPPS16(int, int, std::string, Pythia8::PDFPtr, Pythia8::Logger *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1175:3
    t.constructor<int>(/*finalize=*/true);
    t.constructor<int, int>(/*finalize=*/true);
    t.constructor<int, int, std::string>(/*finalize=*/true);
    t.constructor<int, int, std::string, Pythia8::PDFPtr>(/*finalize=*/true);
    t.constructor<int, int, std::string, Pythia8::PDFPtr, Pythia8::Logger *>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::EPPS16::rUpdate(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::EPPS16::rUpdate(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1183:8
    t.method("rUpdate", static_cast<void (Pythia8::EPPS16::*)(int, double, double) >(&Pythia8::EPPS16::rUpdate));

    DEBUG_MSG("Adding wrapper for void Pythia8::EPPS16::setErrorSet(int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::EPPS16::setErrorSet(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1186:8
    t.method("setErrorSet", static_cast<void (Pythia8::EPPS16::*)(int) >(&Pythia8::EPPS16::setErrorSet));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::EPPS16>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_EPPS16(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_EPPS16(module));
}
