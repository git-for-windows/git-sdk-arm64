case RISCVVector::BI__builtin_rvv_nds_vd4dots_vv_tu:
  ID = Intrinsic::riscv_nds_vd4dots;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dots_vv:
  ID = Intrinsic::riscv_nds_vd4dots;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dots_vv_tum:
  ID = Intrinsic::riscv_nds_vd4dots_mask;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dots_vv_m:
  ID = Intrinsic::riscv_nds_vd4dots_mask;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dots_vv_tumu:
  ID = Intrinsic::riscv_nds_vd4dots_mask;
  PolicyAttrs = 0;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dots_vv_mu:
  ID = Intrinsic::riscv_nds_vd4dots_mask;
  PolicyAttrs = 1;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotsu_vv_tu:
  ID = Intrinsic::riscv_nds_vd4dotsu;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotsu_vv:
  ID = Intrinsic::riscv_nds_vd4dotsu;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotsu_vv_tum:
  ID = Intrinsic::riscv_nds_vd4dotsu_mask;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotsu_vv_m:
  ID = Intrinsic::riscv_nds_vd4dotsu_mask;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotsu_vv_tumu:
  ID = Intrinsic::riscv_nds_vd4dotsu_mask;
  PolicyAttrs = 0;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotsu_vv_mu:
  ID = Intrinsic::riscv_nds_vd4dotsu_mask;
  PolicyAttrs = 1;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotu_vv_tu:
  ID = Intrinsic::riscv_nds_vd4dotu;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotu_vv:
  ID = Intrinsic::riscv_nds_vd4dotu;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotu_vv_tum:
  ID = Intrinsic::riscv_nds_vd4dotu_mask;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotu_vv_m:
  ID = Intrinsic::riscv_nds_vd4dotu_mask;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotu_vv_tumu:
  ID = Intrinsic::riscv_nds_vd4dotu_mask;
  PolicyAttrs = 0;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vd4dotu_vv_mu:
  ID = Intrinsic::riscv_nds_vd4dotu_mask;
  PolicyAttrs = 1;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops[2]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vfncvt_bf16_s_tu:
case RISCVVector::BI__builtin_rvv_nds_vfncvt_bf16_s_rm_tu:
  ID = Intrinsic::riscv_nds_vfncvt_bf16_s;
  PolicyAttrs = 2;
  SegInstSEW = 0;
IsMasked = false;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

    {
      // LLVM intrinsic
      // Unmasked: (passthru, op0, frm, vl)
      SmallVector<llvm::Value*, 4> Operands;
      bool HasMaskedOff = !(PolicyAttrs & RVV_VTA);
      bool HasRoundModeOp = HasMaskedOff ? Ops.size() == 4 : Ops.size() == 3;

      unsigned Offset = HasMaskedOff ? 1 : 0;

      if (!HasMaskedOff)
        Operands.push_back(llvm::PoisonValue::get(ResultType));
      else
        Operands.push_back(Ops[0]);

      Operands.push_back(Ops[Offset]); // op0

      if (HasRoundModeOp) {
        Operands.push_back(Ops[Offset + 1]); // frm
        Operands.push_back(Ops[Offset + 2]); // vl
      } else {
        Operands.push_back(ConstantInt::get(Ops[Offset + 1]->getType(), 7)); // frm
        Operands.push_back(Ops[Offset + 1]); // vl
      }

      IntrinsicTypes = {ResultType, Ops[Offset]->getType(),
                        Operands.back()->getType()};
      llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
      return Builder.CreateCall(F, Operands, "");
    }
  break;
case RISCVVector::BI__builtin_rvv_nds_vfncvt_bf16_s:
case RISCVVector::BI__builtin_rvv_nds_vfncvt_bf16_s_rm:
  ID = Intrinsic::riscv_nds_vfncvt_bf16_s;
  PolicyAttrs = 3;
  SegInstSEW = 0;
IsMasked = false;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

    {
      // LLVM intrinsic
      // Unmasked: (passthru, op0, frm, vl)
      SmallVector<llvm::Value*, 4> Operands;
      bool HasMaskedOff = !(PolicyAttrs & RVV_VTA);
      bool HasRoundModeOp = HasMaskedOff ? Ops.size() == 4 : Ops.size() == 3;

      unsigned Offset = HasMaskedOff ? 1 : 0;

      if (!HasMaskedOff)
        Operands.push_back(llvm::PoisonValue::get(ResultType));
      else
        Operands.push_back(Ops[0]);

      Operands.push_back(Ops[Offset]); // op0

      if (HasRoundModeOp) {
        Operands.push_back(Ops[Offset + 1]); // frm
        Operands.push_back(Ops[Offset + 2]); // vl
      } else {
        Operands.push_back(ConstantInt::get(Ops[Offset + 1]->getType(), 7)); // frm
        Operands.push_back(Ops[Offset + 1]); // vl
      }

      IntrinsicTypes = {ResultType, Ops[Offset]->getType(),
                        Operands.back()->getType()};
      llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
      return Builder.CreateCall(F, Operands, "");
    }
  break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_tu:
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_rm_tu:
  ID = Intrinsic::riscv_nds_vfpmadb;
  PolicyAttrs = 2;
  SegInstSEW = 0;
IsMasked = false;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf:
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_rm:
  ID = Intrinsic::riscv_nds_vfpmadb;
  PolicyAttrs = 3;
  SegInstSEW = 0;
IsMasked = false;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_tum:
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_rm_tum:
  ID = Intrinsic::riscv_nds_vfpmadb_mask;
  PolicyAttrs = 2;
  SegInstSEW = 0;
IsMasked = true;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_m:
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_rm_m:
  ID = Intrinsic::riscv_nds_vfpmadb_mask;
  PolicyAttrs = 3;
  SegInstSEW = 0;
IsMasked = true;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_tumu:
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_rm_tumu:
  ID = Intrinsic::riscv_nds_vfpmadb_mask;
  PolicyAttrs = 0;
  SegInstSEW = 0;
IsMasked = true;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_mu:
case RISCVVector::BI__builtin_rvv_nds_vfpmadb_vf_rm_mu:
  ID = Intrinsic::riscv_nds_vfpmadb_mask;
  PolicyAttrs = 1;
  SegInstSEW = 0;
IsMasked = true;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_tu:
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_rm_tu:
  ID = Intrinsic::riscv_nds_vfpmadt;
  PolicyAttrs = 2;
  SegInstSEW = 0;
IsMasked = false;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf:
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_rm:
  ID = Intrinsic::riscv_nds_vfpmadt;
  PolicyAttrs = 3;
  SegInstSEW = 0;
IsMasked = false;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_tum:
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_rm_tum:
  ID = Intrinsic::riscv_nds_vfpmadt_mask;
  PolicyAttrs = 2;
  SegInstSEW = 0;
IsMasked = true;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_m:
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_rm_m:
  ID = Intrinsic::riscv_nds_vfpmadt_mask;
  PolicyAttrs = 3;
  SegInstSEW = 0;
IsMasked = true;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_tumu:
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_rm_tumu:
  ID = Intrinsic::riscv_nds_vfpmadt_mask;
  PolicyAttrs = 0;
  SegInstSEW = 0;
IsMasked = true;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_mu:
case RISCVVector::BI__builtin_rvv_nds_vfpmadt_vf_rm_mu:
  ID = Intrinsic::riscv_nds_vfpmadt_mask;
  PolicyAttrs = 1;
  SegInstSEW = 0;
IsMasked = true;
if (SegInstSEW == (unsigned)-1) {
  auto PointeeType = E->getArg(4294967295      )->getType()->getPointeeType();
  SegInstSEW =       llvm::Log2_64(getContext().getTypeSize(PointeeType));
}

  {
    // LLVM intrinsic
    // Unmasked: (passthru, op0, op1, round_mode, vl)
    // Masked:   (passthru, vector_in, vector_in/scalar_in, mask, frm, vl, policy)

    SmallVector<llvm::Value*, 7> Operands;
    bool HasMaskedOff = !(
        (IsMasked && (PolicyAttrs & RVV_VTA) && (PolicyAttrs & RVV_VMA)) ||
        (!IsMasked && PolicyAttrs & RVV_VTA));
    bool HasRoundModeOp = IsMasked ?
      (HasMaskedOff ? Ops.size() == 6 : Ops.size() == 5) :
      (HasMaskedOff ? Ops.size() == 5 : Ops.size() == 4);

    unsigned Offset = IsMasked ?
        (HasMaskedOff ? 2 : 1) : (HasMaskedOff ? 1 : 0);

    if (!HasMaskedOff)
      Operands.push_back(llvm::PoisonValue::get(ResultType));
    else
      Operands.push_back(Ops[IsMasked ? 1 : 0]);

    Operands.push_back(Ops[Offset]); // op0
    Operands.push_back(Ops[Offset + 1]); // op1

    if (IsMasked)
      Operands.push_back(Ops[0]); // mask

    if (HasRoundModeOp) {
      Operands.push_back(Ops[Offset + 2]); // frm
      Operands.push_back(Ops[Offset + 3]); // vl
    } else {
      Operands.push_back(ConstantInt::get(Ops[Offset + 2]->getType(), 7)); // frm
      Operands.push_back(Ops[Offset + 2]); // vl
    }

    if (IsMasked)
      Operands.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));

    IntrinsicTypes = {ResultType, Ops[Offset + 1]->getType(),
                      Operands.back()->getType()};
    llvm::Function *F = CGM.getIntrinsic(ID, IntrinsicTypes);
    return Builder.CreateCall(F, Operands, "");
  }
break;
case RISCVVector::BI__builtin_rvv_nds_vfwcvt_s_bf16_tu:
  ID = Intrinsic::riscv_nds_vfwcvt_s_bf16;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vfwcvt_s_bf16:
  ID = Intrinsic::riscv_nds_vfwcvt_s_bf16;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  Ops.insert(Ops.begin(), llvm::PoisonValue::get(ResultType));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vln8_v_tu:
  ID = Intrinsic::riscv_nds_vln;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vln8_v:
  ID = Intrinsic::riscv_nds_vln;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  Ops.insert(Ops.begin(), llvm::PoisonValue::get(ResultType));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vln8_v_tum:
  ID = Intrinsic::riscv_nds_vln_mask;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vln8_v_m:
  ID = Intrinsic::riscv_nds_vln_mask;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  Ops.insert(Ops.begin(), llvm::PoisonValue::get(ResultType));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vln8_v_tumu:
  ID = Intrinsic::riscv_nds_vln_mask;
  PolicyAttrs = 0;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vln8_v_mu:
  ID = Intrinsic::riscv_nds_vln_mask;
  PolicyAttrs = 1;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vlnu8_v_tu:
  ID = Intrinsic::riscv_nds_vlnu;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vlnu8_v:
  ID = Intrinsic::riscv_nds_vlnu;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  Ops.insert(Ops.begin(), llvm::PoisonValue::get(ResultType));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vlnu8_v_tum:
  ID = Intrinsic::riscv_nds_vlnu_mask;
  PolicyAttrs = 2;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vlnu8_v_m:
  ID = Intrinsic::riscv_nds_vlnu_mask;
  PolicyAttrs = 3;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  Ops.insert(Ops.begin(), llvm::PoisonValue::get(ResultType));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vlnu8_v_tumu:
  ID = Intrinsic::riscv_nds_vlnu_mask;
  PolicyAttrs = 0;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;
case RISCVVector::BI__builtin_rvv_nds_vlnu8_v_mu:
  ID = Intrinsic::riscv_nds_vlnu_mask;
  PolicyAttrs = 1;
  SegInstSEW = 0;
  std::rotate(Ops.begin(), Ops.begin() + 1, Ops.end() - 1);
  Ops.push_back(ConstantInt::get(Ops.back()->getType(), PolicyAttrs));
  IntrinsicTypes = {ResultType, Ops[1]->getType(), Ops.back()->getType()};
  break;

