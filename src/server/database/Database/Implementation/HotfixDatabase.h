/*
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

 // DO NOT EDIT!
 // Autogenerated from DB2Structure.h

#ifndef _HOTFIXDATABASE_H
#define _HOTFIXDATABASE_H

#include "DatabaseWorkerPool.h"
#include "MySQLConnection.h"

enum HotfixDatabaseStatements
{
    /*  Naming standard for defines:
        {DB}_{SEL/INS/UPD/DEL/REP}_{Summary of data changed}
        When updating more than one field, consider looking at the calling function
        name for a suiting suffix.
    */

    HOTFIX_SEL_ACHIEVEMENT,
    HOTFIX_SEL_ACHIEVEMENT_LOCALE,

    HOTFIX_SEL_AREA_GROUP_MEMBER,

    HOTFIX_SEL_AUCTION_HOUSE,
    HOTFIX_SEL_AUCTION_HOUSE_LOCALE,

    HOTFIX_SEL_BARBER_SHOP_STYLE,
    HOTFIX_SEL_BARBER_SHOP_STYLE_LOCALE,

    HOTFIX_SEL_BATTLE_PET_BREED_QUALITY,

    HOTFIX_SEL_BATTLE_PET_BREED_STATE,

    HOTFIX_SEL_BATTLE_PET_SPECIES,
    HOTFIX_SEL_BATTLE_PET_SPECIES_LOCALE,

    HOTFIX_SEL_BATTLE_PET_SPECIES_STATE,

    HOTFIX_SEL_BROADCAST_TEXT,
    HOTFIX_SEL_BROADCAST_TEXT_LOCALE,

    HOTFIX_SEL_CHAR_START_OUTFIT,

    HOTFIX_SEL_CHR_CLASSES_X_POWER_TYPES,

    HOTFIX_SEL_CINEMATIC_SEQUENCES,

    HOTFIX_SEL_CREATURE_DISPLAY_INFO,
    HOTFIX_SEL_CREATURE_DISPLAY_INFO_LOCALE,

    HOTFIX_SEL_CREATURE_TYPE,
    HOTFIX_SEL_CREATURE_TYPE_LOCALE,

    HOTFIX_SEL_CRITERIA,

    HOTFIX_SEL_CRITERIA_TREE,
    HOTFIX_SEL_CRITERIA_TREE_LOCALE,

    HOTFIX_SEL_CURRENCY_TYPES,
    HOTFIX_SEL_CURRENCY_TYPES_LOCALE,

    HOTFIX_SEL_CURVE_POINT,

    HOTFIX_SEL_DESTRUCTIBLE_MODEL_DATA,

    HOTFIX_SEL_DURABILITY_QUALITY,

    HOTFIX_SEL_GAMEOBJECTS,
    HOTFIX_SEL_GAMEOBJECTS_LOCALE,

    HOTFIX_SEL_GAME_TABLES,
    HOTFIX_SEL_GAME_TABLES_LOCALE,

    HOTFIX_SEL_GARR_ABILITY,
    HOTFIX_SEL_GARR_ABILITY_LOCALE,

    HOTFIX_SEL_GARR_BUILDING,
    HOTFIX_SEL_GARR_BUILDING_LOCALE,

    HOTFIX_SEL_GARR_BUILDING_PLOT_INST,

    HOTFIX_SEL_GARR_CLASS_SPEC,
    HOTFIX_SEL_GARR_CLASS_SPEC_LOCALE,

    HOTFIX_SEL_GARR_FOLLOWER,
    HOTFIX_SEL_GARR_FOLLOWER_LOCALE,

    HOTFIX_SEL_GARR_FOLLOWER_X_ABILITY,

    HOTFIX_SEL_GARR_PLOT,
    HOTFIX_SEL_GARR_PLOT_LOCALE,

    HOTFIX_SEL_GARR_PLOT_BUILDING,

    HOTFIX_SEL_GARR_PLOT_INSTANCE,
    HOTFIX_SEL_GARR_PLOT_INSTANCE_LOCALE,

    HOTFIX_SEL_GARR_SITE_LEVEL,

    HOTFIX_SEL_GARR_SITE_LEVEL_PLOT_INST,

    HOTFIX_SEL_GLYPH_SLOT,

    HOTFIX_SEL_GUILD_PERK_SPELLS,

    HOTFIX_SEL_HEIRLOOM,
    HOTFIX_SEL_HEIRLOOM_LOCALE,

    HOTFIX_SEL_HOLIDAYS,
    HOTFIX_SEL_HOLIDAYS_LOCALE,

    HOTFIX_SEL_IMPORT_PRICE_ARMOR,

    HOTFIX_SEL_IMPORT_PRICE_QUALITY,

    HOTFIX_SEL_IMPORT_PRICE_SHIELD,

    HOTFIX_SEL_IMPORT_PRICE_WEAPON,

    HOTFIX_SEL_ITEM_APPEARANCE,

    HOTFIX_SEL_ITEM_BONUS,

    HOTFIX_SEL_ITEM_BONUS_TREE_NODE,

    HOTFIX_SEL_ITEM_CLASS,
    HOTFIX_SEL_ITEM_CLASS_LOCALE,

    HOTFIX_SEL_ITEM_CURRENCY_COST,

    HOTFIX_SEL_ITEM_DISENCHANT_LOOT,

    HOTFIX_SEL_ITEM_EFFECT,

    HOTFIX_SEL_ITEM,

    HOTFIX_SEL_ITEM_EXTENDED_COST,

    HOTFIX_SEL_ITEM_LIMIT_CATEGORY,
    HOTFIX_SEL_ITEM_LIMIT_CATEGORY_LOCALE,

    HOTFIX_SEL_ITEM_MODIFIED_APPEARANCE,

    HOTFIX_SEL_ITEM_PRICE_BASE,

    HOTFIX_SEL_ITEM_RANDOM_PROPERTIES,
    HOTFIX_SEL_ITEM_RANDOM_PROPERTIES_LOCALE,

    HOTFIX_SEL_ITEM_RANDOM_SUFFIX,
    HOTFIX_SEL_ITEM_RANDOM_SUFFIX_LOCALE,

    HOTFIX_SEL_ITEM_SPARSE,
    HOTFIX_SEL_ITEM_SPARSE_LOCALE,

    HOTFIX_SEL_ITEM_SPEC,

    HOTFIX_SEL_ITEM_SPEC_OVERRIDE,

    HOTFIX_SEL_ITEM_TO_BATTLE_PET_SPECIES,

    HOTFIX_SEL_ITEM_X_BONUS_TREE,

    HOTFIX_SEL_KEY_CHAIN,

    HOTFIX_SEL_MAIL_TEMPLATE,
    HOTFIX_SEL_MAIL_TEMPLATE_LOCALE,

    HOTFIX_SEL_MODIFIER_TREE,

    HOTFIX_SEL_MOUNT,
    HOTFIX_SEL_MOUNT_LOCALE,

    HOTFIX_SEL_MOUNT_CAPABILITY,

    HOTFIX_SEL_MOUNT_TYPE_X_CAPABILITY,

    HOTFIX_SEL_NAME_GEN,
    HOTFIX_SEL_NAME_GEN_LOCALE,

    HOTFIX_SEL_NAMES_PROFANITY,

    HOTFIX_SEL_NAMES_RESERVED,

    HOTFIX_SEL_NAMES_RESERVED_LOCALE,

    HOTFIX_SEL_OVERRIDE_SPELL_DATA,

    HOTFIX_SEL_PHASE_X_PHASE_GROUP,

    HOTFIX_SEL_PLAYER_CONDITION,
    HOTFIX_SEL_PLAYER_CONDITION_LOCALE,

    HOTFIX_SEL_QUEST_MONEY_REWARD,

    HOTFIX_SEL_QUEST_PACKAGE_ITEM,

    HOTFIX_SEL_QUEST_SORT,
    HOTFIX_SEL_QUEST_SORT_LOCALE,

    HOTFIX_SEL_QUEST_V2,

    HOTFIX_SEL_QUEST_XP,

    HOTFIX_SEL_SCALING_STAT_DISTRIBUTION,

    HOTFIX_SEL_SOUND_ENTRIES,
    HOTFIX_SEL_SOUND_ENTRIES_LOCALE,

    HOTFIX_SEL_SPECIALIZATION_SPELLS,
    HOTFIX_SEL_SPECIALIZATION_SPELLS_LOCALE,

    HOTFIX_SEL_SPELL_AURA_RESTRICTIONS,

    HOTFIX_SEL_SPELL_CASTING_REQUIREMENTS,

    HOTFIX_SEL_SPELL_CAST_TIMES,

    HOTFIX_SEL_SPELL_CLASS_OPTIONS,

    HOTFIX_SEL_SPELL_DURATION,

    HOTFIX_SEL_SPELL_ITEM_ENCHANTMENT_CONDITION,

    HOTFIX_SEL_SPELL_LEARN_SPELL,

    HOTFIX_SEL_SPELL_MISC,

    HOTFIX_SEL_SPELL_POWER,

    HOTFIX_SEL_SPELL_POWER_DIFFICULTY,

    HOTFIX_SEL_SPELL_PROCS_PER_MINUTE,

    HOTFIX_SEL_SPELL_PROCS_PER_MINUTE_MOD,

    HOTFIX_SEL_SPELL_RADIUS,

    HOTFIX_SEL_SPELL_RANGE,
    HOTFIX_SEL_SPELL_RANGE_LOCALE,

    HOTFIX_SEL_SPELL_REAGENTS,

    HOTFIX_SEL_SPELL_RUNE_COST,

    HOTFIX_SEL_SPELL_TOTEMS,

    HOTFIX_SEL_SPELL_X_SPELL_VISUAL,

    HOTFIX_SEL_TAXI_NODES,
    HOTFIX_SEL_TAXI_NODES_LOCALE,

    HOTFIX_SEL_TAXI_PATH,

    HOTFIX_SEL_TAXI_PATH_NODE,

    HOTFIX_SEL_TOTEM_CATEGORY,
    HOTFIX_SEL_TOTEM_CATEGORY_LOCALE,

    HOTFIX_SEL_TOY,
    HOTFIX_SEL_TOY_LOCALE,

    HOTFIX_SEL_TRANSPORT_ANIMATION,

    HOTFIX_SEL_TRANSPORT_ROTATION,

    HOTFIX_SEL_UNIT_POWER_BAR,
    HOTFIX_SEL_UNIT_POWER_BAR_LOCALE,

    HOTFIX_SEL_WORLD_MAP_OVERLAY,
    HOTFIX_SEL_WORLD_MAP_OVERLAY_LOCALE,

    MAX_HOTFIXDATABASE_STATEMENTS
};

class TC_DATABASE_API HotfixDatabaseConnection : public MySQLConnection
{
public:
    typedef HotfixDatabaseStatements Statements;

    //- Constructors for sync and async connections
    HotfixDatabaseConnection(MySQLConnectionInfo& connInfo) : MySQLConnection(connInfo) { }
    HotfixDatabaseConnection(ProducerConsumerQueue<SQLOperation*>* q, MySQLConnectionInfo& connInfo) : MySQLConnection(q, connInfo) { }

    //- Loads database type specific prepared statements
    void DoPrepareStatements() override;
};

typedef DatabaseWorkerPool<HotfixDatabaseConnection> HotfixDatabaseWorkerPool;

#endif