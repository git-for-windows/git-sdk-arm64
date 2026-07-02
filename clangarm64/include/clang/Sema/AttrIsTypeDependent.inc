/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Attribute is type dependent                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Attr.td                                                              *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

void checkAttrIsTypeDependent(Decl *D, const Attr *A) {
  switch (A->getKind()) {
  default:
    break;
  case attr::Cleanup:
    ActOnCleanupAttr(D, A);
    break;
  }
}
