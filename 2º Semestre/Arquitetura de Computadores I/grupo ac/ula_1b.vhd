library ieee;
use ieee.std_logic_1164.all;

entity ula_1b is port (
  a1, b1, less1, binvert1, carryin1: in std_logic;
  operation1: in std_logic_vector(2 downto 0);
  resultado1, set1, overflow1: out std_logic
);
end ula_1b;

architecture ula_1b_arch of ula_1b is

  component somador is port (
    a, b, c : in std_logic;
    soma, carry: out std_logic
  );
  end component;

  component mult2x1 is port (
    val, binvert : in std_logic;
    s : out std_logic
  );
  end component;

  component mult4x1 is port (
    r0, r1, r2, r3: in std_logic;
    operation: in std_logic_vector(2 downto 0);
    s: out std_logic
  );
  end component;

  signal resultSomador: std_logic;
  signal resultAnd: std_logic;
  signal resultOr: std_logic;
  signal resultBInvert: std_logic;
  
  begin
    
  resultAnd <= a1 and b1;
  resultOr  <= a1 or b1;
    
  mux2: mult2x1 port map(
    val => b1,
    binvert => binvert1,
    s => resultBInvert
  );    

  somador1b: somador port map (
    a => a1,
    b => resultBInvert,
    c => carryin1,
    soma => resultSomador,
    carry => overflow1
  );
    
  mux4: mult4x1 port map (
    r0 => resultAnd,
    r1 => resultOr,
    r2 => resultSomador,
    r3 => less1,
    operation => operation1,
    s  => resultado1
  );
    
end ula_1b_arch;
