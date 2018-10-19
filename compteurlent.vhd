library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity compteurlent is
	PORT(	
		clk : in std_logic; --preferable a 'bit' pour avoir les etats X et U
		nrst : in std_logic;
		nen : in std_logic;
		set : in std_logic;
		din : in std_logic_vector(7 downto 0);
		dout : out std_logic_vector(7 downto 0));
end compteurlent;

architecture Behavioral of compteurlent is

	component compteur is
		port(
			clk : in std_logic; --preferable a 'bit' pour avoir les etats X et U
			nrst : in std_logic;
			nen : in std_logic;
			set : in std_logic;
			din : in std_logic_vector(7 downto 0);
			dout : out std_logic_vector(7 downto 0)
		);
	end component;
	
	component diviseur is
	port(
		divin : in std_logic;
		divrst : in std_logic;
		divout : out std_logic
		);
	end component;

	signal internal_clk_1hz: std_logic;
	
begin
	u1: diviseur PORT MAP ( 
		divin => clk,
		divrst => nrst,
		divout => internal_clk_1hz);
		
	u2: compteur PORT MAP(
		clk => internal_clk_1hz,
		nrst => nrst,
		nen => nen,
		set => set,
		din => din,
		dout => dout);

end Behavioral;

