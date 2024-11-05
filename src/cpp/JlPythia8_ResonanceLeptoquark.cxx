// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::ResonanceLeptoquark> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::ResonanceLeptoquark> : std::false_type { };
template<> struct SuperType<Pythia8::ResonanceLeptoquark> { typedef Pythia8::ResonanceWidths type; };
}

// Class generating the wrapper for type Pythia8::ResonanceLeptoquark
// signature to use in the veto file: Pythia8::ResonanceLeptoquark
struct JlPythia8_ResonanceLeptoquark: public Wrapper {

  JlPythia8_ResonanceLeptoquark(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::ResonanceLeptoquark (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:546:7
    jlcxx::TypeWrapper<Pythia8::ResonanceLeptoquark>  t = jlModule.add_type<Pythia8::ResonanceLeptoquark>("Pythia8!ResonanceLeptoquark",
      jlcxx::julia_base_type<Pythia8::ResonanceWidths>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ResonanceLeptoquark>>(new jlcxx::TypeWrapper<Pythia8::ResonanceLeptoquark>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::ResonanceLeptoquark::ResonanceLeptoquark(int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ResonanceWidths.h:551:3
    t.constructor<int>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ResonanceLeptoquark>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_ResonanceLeptoquark(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_ResonanceLeptoquark(module));
}
