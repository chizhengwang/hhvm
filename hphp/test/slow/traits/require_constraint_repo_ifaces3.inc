<?hh
// Copyright 2004-present Facebook. All Rights Reserved.

interface I {
  public function f();
}

abstract class Super {
  public function g();
}

trait ProvidesT implements I {}

trait ChildProvidesT {
  use ProvidesT;
}
