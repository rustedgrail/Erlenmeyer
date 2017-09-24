defmodule FastCompare do
  @on_load :load_nifs

  def load_nifs do
    :erlang.load_nif('./fast_compare', 0)
  end

  def fast_compare(_a, _b) do
    raise "Not yet!"
  end
end
