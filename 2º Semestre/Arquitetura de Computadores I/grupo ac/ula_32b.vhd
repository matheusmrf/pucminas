library ieee;
use ieee.std_logic_1164.all;

entity ula_32b is port (
  a, b : in std_logic_vector(31 downto 0);
  binvert: in std_logic;
  operation: in std_logic_vector(2 downto 0);
  resultado : out std_logic_vector(31 downto 0);
  zero, overflow: out std_logic
);
end ula_32b;

architecture ula_32b_arch of ula_32b is

  component ula_1b is port (
    a1, b1, less1, binvert1, carryin1: in std_logic;
    operation1: in std_logic_vector(2 downto 0);
    resultado1, set1, overflow1: out std_logic
  );
  end component;


  signal set32: std_logic;
  signal overflow32: std_logic;
  
  begin
    
  -- ULA INICIAL
  ula0: ula_1b port map(
    a1  => a(0),
    b1  => b(0),
    less1  => '0',
    binvert1  => binvert,
    carryin1  => binvert,
    operation1 => operation,
    resultado1 => resultado(0),
    set1 => set32,
    overflow1 => overflow32
  );    
  
  -- 30 ULAS SEQ
  ulas_30: for i in 1 to 30 generate
  ula30: ula_1b port map(
    a1  => a(i),
    b1  => b(i),
    less1  => '0',
    binvert1  => binvert,
    carryin1  => binvert,
    operation1 => operation,
    resultado1 => resultado(i),
    set1 => set32,
    overflow1 => overflow32
  );  
  end generate ulas_30;
  
  -- ULA FINAL
  ula31: ula_1b port map(
    a1  => a(31),
    b1  => b(31),
    less1  => '0',
    binvert1  => binvert,
    carryin1  => binvert,
    operation1 => operation,
    resultado1 => resultado(31),
    set1 => zero,
    overflow1 => overflow
  ); 
  
    
end ula_32b_arch;
