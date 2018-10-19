
-- VHDL Instantiation Created from source file diviseur.vhd -- 08:50:46 10/18/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT diviseur
	PORT(
		divin : IN std_logic;
		divrst : IN std_logic;          
		divout : OUT std_logic
		);
	END COMPONENT;

	Inst_diviseur: diviseur PORT MAP(
		divin => ,
		divrst => ,
		divout => 
	);


