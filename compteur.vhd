library IEEE;
use IEEE.std_logic_1164.all; --Charge les etats 0 1 X et U
use IEEE.numeric_std.all; --Pour gerer les unsigned necessaires aux additions de std_logic_vector
entity compteur is
	port(
		--liste des signaux
		-- <signal> : <in|out> <type>
		clk : in std_logic; --preferable a 'bit' pour avoir les etats X et U
		nrst : in std_logic;
		nen : in std_logic;
		set : in std_logic;
		din : in std_logic_vector(7 downto 0);
		dout : out std_logic_vector(7 downto 0)
		);
end compteur;

architecture struct of compteur is
	signal preout : std_logic_vector(7 downto 0); 

begin

process
	
	begin
	
		
	
		
		if NRST = '0' 
			then preout <= "00000000";
		elsif rising_edge(clk) then
			if set = '1'
				then preout <= din;
			elsif nen = '0'
			--then preout <= preout + "00000001"; ne marche pas : dout et preout sont des bus, pas des nombres.
				then preout <= std_logic_vector(unsigned(preout) + 1);
			end if;
		end if;
		
		dout <= preout;
	
end process;

end struct;
	