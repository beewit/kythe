// Checks that the indexer finds and emits nodes for types and typedefs.
class C {
  class D;
//- @D ref NominalD
//- @tdef defines/binding TypeAlias
  typedef D tdef;
};
// Note that the tag at the end of a stringified NameId refers to the whole
// name, not just that node.
//- TypeAlias aliases NominalD
//- NominalD.node/kind tnominal
