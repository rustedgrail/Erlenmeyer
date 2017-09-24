defmodule ErlenmeyerTest do
  use ExUnit.Case
  doctest Erlenmeyer

  test "greets the world" do
    assert Erlenmeyer.hello() == :world
  end
end
